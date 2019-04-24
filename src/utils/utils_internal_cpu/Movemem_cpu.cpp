#include "utils/utils_internal_cpu/Movemem_cpu.hpp"
#include "Storage.hpp"
#ifdef UNI_OMP
#include <omp.h>
#endif

using namespace std;
namespace tor10{

    namespace utils_internal{
        
        boost::intrusive_ptr<Storage_base> Movemem_cpu_cd(boost::intrusive_ptr<Storage_base> &in, const std::vector<tor10_uint64> &old_shape, const std::vector<tor10_uint64>&mapper, const std::vector<tor10_uint64> &invmapper, const bool is_inplace){
            #ifdef UNI_DEBUG
            tor10_error_msg(in->dtype_id != tor10type.ComplexDouble,"[DEBUG][internal error] in.dtype is [%s] but call Movemem_cpu with type ComplexDouble",in->dtype().c_str());
            #endif

            std::vector<tor10_uint64> newshape(old_shape.size());
            for(tor10_uint64 i=0;i<old_shape.size();i++)
                newshape[i] = old_shape[mapper[i]];

            std::vector<tor10_uint64> shifter_old(old_shape.size());
            std::vector<tor10_uint64> shifter_new(old_shape.size());

            tor10_uint64 accu_old=1,accu_new=1;
            for(tor10_int64 i=old_shape.size()-1;i>=0;i--){
                shifter_old[i] = accu_old;
                shifter_new[i] = accu_new;
                accu_old*=old_shape[i];
                accu_new*=newshape[i];
            }
            std::vector<tor10_uint64> old_inds(old_shape.size());

            tor10_complex128 *des = (tor10_complex128*)malloc(accu_old*sizeof(tor10_complex128));
            tor10_complex128 *src = static_cast<tor10_complex128*>(in->Mem);

            #ifdef UNI_OMP
            #pragma omp parallel for schedule(dynamic)
            #endif
            for(tor10_uint64 n=0;n<accu_old;n++){
                //calc new id:
                tor10_uint64 j;
                tor10_uint64 old_loc = n;
                for(j=0;j<old_shape.size();j++){
                    old_inds[j] = old_loc/shifter_old[j];
                    old_loc= old_loc%shifter_old[j];
                }
                old_loc =0; // position:
                for(j=0;j<old_shape.size();j++){
                    old_loc += shifter_new[j]*old_inds[mapper[j]];
                }
                des[old_loc] = src[n];
            }
            

            
            boost::intrusive_ptr<Storage_base> out(new ComplexDoubleStorage());
            if(is_inplace){
                memcpy(in->Mem,des,sizeof(tor10_complex128)*accu_old);
                free(des);
                return out;
            }else{
                out->_Init_byptr(des,accu_old);
                return out;
            }

        }

        boost::intrusive_ptr<Storage_base> Movemem_cpu_cf(boost::intrusive_ptr<Storage_base> &in, const std::vector<tor10_uint64> &old_shape, const std::vector<tor10_uint64>&mapper, const std::vector<tor10_uint64> &invmapper, const bool is_inplace){
            #ifdef UNI_DEBUG
            tor10_error_msg(in->dtype_id != tor10type.ComplexFloat,"[DEBUG][internal error] in.dtype is [%s] but call Movemem_cpu with type ComplexFloat",in->dtype().c_str());
            #endif

            std::vector<tor10_uint64> newshape(old_shape.size());
            for(tor10_uint64 i=0;i<old_shape.size();i++)
                newshape[i] = old_shape[mapper[i]];

            std::vector<tor10_uint64> shifter_old(old_shape.size());
            std::vector<tor10_uint64> shifter_new(old_shape.size());

            tor10_uint64 accu_old=1,accu_new=1;
            for(tor10_int64 i=old_shape.size()-1;i>=0;i--){
                shifter_old[i] = accu_old;
                shifter_new[i] = accu_new;
                accu_old*=old_shape[i];
                accu_new*=newshape[i];
            }
            std::vector<tor10_uint64> old_inds(old_shape.size());

            tor10_complex64 *des = (tor10_complex64*)malloc(accu_old*sizeof(tor10_complex64));
            tor10_complex64 *src = static_cast<tor10_complex64*>(in->Mem);

            #ifdef UNI_OMP
            #pragma omp parallel for schedule(dynamic)
            #endif
            for(tor10_uint64 n=0;n<accu_old;n++){
                //calc new id:
                tor10_uint64 j;
                tor10_uint64 old_loc = n;
                for(j=0;j<old_shape.size();j++){
                    old_inds[j] = old_loc/shifter_old[j];
                    old_loc= old_loc%shifter_old[j];
                }
                old_loc =0; // position:
                for(j=0;j<old_shape.size();j++){
                    old_loc += shifter_new[j]*old_inds[mapper[j]];
                }
                des[old_loc] = src[n];
            }
            

            
            boost::intrusive_ptr<Storage_base> out(new ComplexFloatStorage());
            if(is_inplace){
                memcpy(in->Mem,des,sizeof(tor10_complex64)*accu_old);
                free(des);
                return out;
            }else{
                out->_Init_byptr(des,accu_old);
                return out;
            }


        }
        
        boost::intrusive_ptr<Storage_base> Movemem_cpu_d(boost::intrusive_ptr<Storage_base> &in, const std::vector<tor10_uint64> &old_shape, const std::vector<tor10_uint64>&mapper, const std::vector<tor10_uint64> &invmapper, const bool is_inplace){
            #ifdef UNI_DEBUG
            tor10_error_msg(in->dtype_id != tor10type.Double,"[DEBUG][internal error] in.dtype is [%s] but call Movemem_cpu with type Double",in->dtype().c_str());
            #endif

            std::vector<tor10_uint64> newshape(old_shape.size());
            for(tor10_uint64 i=0;i<old_shape.size();i++)
                newshape[i] = old_shape[mapper[i]];

            std::vector<tor10_uint64> shifter_old(old_shape.size());
            std::vector<tor10_uint64> shifter_new(old_shape.size());

            tor10_uint64 accu_old=1,accu_new=1;
            for(tor10_int64 i=old_shape.size()-1;i>=0;i--){
                shifter_old[i] = accu_old;
                shifter_new[i] = accu_new;
                accu_old*=old_shape[i];
                accu_new*=newshape[i];
            }
            std::vector<tor10_uint64> old_inds(old_shape.size());

            tor10_double *des = (tor10_double*)malloc(accu_old*sizeof(tor10_double));
            tor10_double *src = static_cast<tor10_double*>(in->Mem);

            #ifdef UNI_OMP
            #pragma omp parallel for schedule(dynamic)
            #endif
            for(tor10_uint64 n=0;n<accu_old;n++){
                //calc new id:
                tor10_uint64 j;
                tor10_uint64 old_loc = n;
                for(j=0;j<old_shape.size();j++){
                    old_inds[j] = old_loc/shifter_old[j];
                    old_loc= old_loc%shifter_old[j];
                }
                old_loc =0; // position:
                for(j=0;j<old_shape.size();j++){
                    old_loc += shifter_new[j]*old_inds[mapper[j]];
                }
                des[old_loc] = src[n];
            }
            

            
            boost::intrusive_ptr<Storage_base> out(new DoubleStorage());
            if(is_inplace){
                memcpy(in->Mem,des,sizeof(tor10_double)*accu_old);
                free(des);
                return out;
            }else{
                out->_Init_byptr(des,accu_old);
                return out;
            }


        }
        
        boost::intrusive_ptr<Storage_base> Movemem_cpu_f(boost::intrusive_ptr<Storage_base> &in, const std::vector<tor10_uint64> &old_shape, const std::vector<tor10_uint64>&mapper, const std::vector<tor10_uint64> &invmapper, const bool is_inplace){
            #ifdef UNI_DEBUG
            tor10_error_msg(in->dtype_id != tor10type.Float,"[DEBUG][internal error] in.dtype is [%s] but call Movemem_cpu with type Float",in->dtype().c_str());
            #endif

            std::vector<tor10_uint64> newshape(old_shape.size());
            for(tor10_uint64 i=0;i<old_shape.size();i++)
                newshape[i] = old_shape[mapper[i]];

            std::vector<tor10_uint64> shifter_old(old_shape.size());
            std::vector<tor10_uint64> shifter_new(old_shape.size());

            tor10_uint64 accu_old=1,accu_new=1;
            for(tor10_int64 i=old_shape.size()-1;i>=0;i--){
                shifter_old[i] = accu_old;
                shifter_new[i] = accu_new;
                accu_old*=old_shape[i];
                accu_new*=newshape[i];
            }
            std::vector<tor10_uint64> old_inds(old_shape.size());

            tor10_float *des = (tor10_float*)malloc(accu_old*sizeof(tor10_float));
            tor10_float *src = static_cast<tor10_float*>(in->Mem);

            #ifdef UNI_OMP
            #pragma omp parallel for schedule(dynamic)
            #endif
            for(tor10_uint64 n=0;n<accu_old;n++){
                //calc new id:
                tor10_uint64 j;
                tor10_uint64 old_loc = n;
                for(j=0;j<old_shape.size();j++){
                    old_inds[j] = old_loc/shifter_old[j];
                    old_loc= old_loc%shifter_old[j];
                }
                old_loc =0; // position:
                for(j=0;j<old_shape.size();j++){
                    old_loc += shifter_new[j]*old_inds[mapper[j]];
                }
                des[old_loc] = src[n];
            }
            

            
            boost::intrusive_ptr<Storage_base> out(new FloatStorage());
            if(is_inplace){
                memcpy(in->Mem,des,sizeof(tor10_float)*accu_old);
                free(des);
                return out;
            }else{
                out->_Init_byptr(des,accu_old);
                return out;
            }


        }

        boost::intrusive_ptr<Storage_base> Movemem_cpu_i64(boost::intrusive_ptr<Storage_base> &in, const std::vector<tor10_uint64> &old_shape, const std::vector<tor10_uint64>&mapper, const std::vector<tor10_uint64> &invmapper, const bool is_inplace){
            #ifdef UNI_DEBUG
            tor10_error_msg(in->dtype_id != tor10type.Int64,"[DEBUG][internal error] in.dtype is [%s] but call Movemem_cpu with type Int64",in->dtype().c_str());
            #endif

            std::vector<tor10_uint64> newshape(old_shape.size());
            for(tor10_uint64 i=0;i<old_shape.size();i++)
                newshape[i] = old_shape[mapper[i]];

            std::vector<tor10_uint64> shifter_old(old_shape.size());
            std::vector<tor10_uint64> shifter_new(old_shape.size());

            tor10_uint64 accu_old=1,accu_new=1;
            for(tor10_int64 i=old_shape.size()-1;i>=0;i--){
                shifter_old[i] = accu_old;
                shifter_new[i] = accu_new;
                accu_old*=old_shape[i];
                accu_new*=newshape[i];
            }
            std::vector<tor10_uint64> old_inds(old_shape.size());

            tor10_int64 *des = (tor10_int64*)malloc(accu_old*sizeof(tor10_int64));
            tor10_int64 *src = static_cast<tor10_int64*>(in->Mem);

            #ifdef UNI_OMP
            #pragma omp parallel for schedule(dynamic)
            #endif
            for(tor10_uint64 n=0;n<accu_old;n++){
                //calc new id:
                tor10_uint64 j;
                tor10_uint64 old_loc = n;
                for(j=0;j<old_shape.size();j++){
                    old_inds[j] = old_loc/shifter_old[j];
                    old_loc= old_loc%shifter_old[j];
                }
                old_loc =0; // position:
                for(j=0;j<old_shape.size();j++){
                    old_loc += shifter_new[j]*old_inds[mapper[j]];
                }
                des[old_loc] = src[n];
            }
            

            
            boost::intrusive_ptr<Storage_base> out(new Int64Storage());
            if(is_inplace){
                memcpy(in->Mem,des,sizeof(tor10_int64)*accu_old);
                free(des);
                return out;
            }else{
                out->_Init_byptr(des,accu_old);
                return out;
            }


       }

        boost::intrusive_ptr<Storage_base> Movemem_cpu_u64(boost::intrusive_ptr<Storage_base> &in, const std::vector<tor10_uint64> &old_shape, const std::vector<tor10_uint64>&mapper, const std::vector<tor10_uint64> &invmapper, const bool is_inplace){
            #ifdef UNI_DEBUG
            tor10_error_msg(in->dtype_id != tor10type.Uint64,"[DEBUG][internal error] in.dtype is [%s] but call Movemem_cpu with type Uint64",in->dtype().c_str());
            #endif

            std::vector<tor10_uint64> newshape(old_shape.size());
            for(tor10_uint64 i=0;i<old_shape.size();i++)
                newshape[i] = old_shape[mapper[i]];

            std::vector<tor10_uint64> shifter_old(old_shape.size());
            std::vector<tor10_uint64> shifter_new(old_shape.size());

            tor10_uint64 accu_old=1,accu_new=1;
            for(tor10_int64 i=old_shape.size()-1;i>=0;i--){
                shifter_old[i] = accu_old;
                shifter_new[i] = accu_new;
                accu_old*=old_shape[i];
                accu_new*=newshape[i];
            }
            std::vector<tor10_uint64> old_inds(old_shape.size());

            tor10_uint64 *des = (tor10_uint64*)malloc(accu_old*sizeof(tor10_uint64));
            tor10_uint64 *src = static_cast<tor10_uint64*>(in->Mem);

            #ifdef UNI_OMP
            #pragma omp parallel for schedule(dynamic)
            #endif
            for(tor10_uint64 n=0;n<accu_old;n++){
                //calc new id:
                tor10_uint64 j;
                tor10_uint64 old_loc = n;
                for(j=0;j<old_shape.size();j++){
                    old_inds[j] = old_loc/shifter_old[j];
                    old_loc= old_loc%shifter_old[j];
                }
                old_loc =0; // position:
                for(j=0;j<old_shape.size();j++){
                    old_loc += shifter_new[j]*old_inds[mapper[j]];
                }
                des[old_loc] = src[n];
            }
            

            
            boost::intrusive_ptr<Storage_base> out(new Uint64Storage());
            if(is_inplace){
                memcpy(in->Mem,des,sizeof(tor10_uint64)*accu_old);
                free(des);
                return out;
            }else{
                out->_Init_byptr(des,accu_old);
                return out;
            }

        }

        boost::intrusive_ptr<Storage_base> Movemem_cpu_i32(boost::intrusive_ptr<Storage_base> &in, const std::vector<tor10_uint64> &old_shape, const std::vector<tor10_uint64>&mapper, const std::vector<tor10_uint64> &invmapper, const bool is_inplace){
            #ifdef UNI_DEBUG
            tor10_error_msg(in->dtype_id != tor10type.Int32,"[DEBUG][internal error] in.dtype is [%s] but call Movemem_cpu with type Int32",in->dtype().c_str());
            #endif

            std::vector<tor10_uint64> newshape(old_shape.size());
            for(tor10_uint64 i=0;i<old_shape.size();i++)
                newshape[i] = old_shape[mapper[i]];

            std::vector<tor10_uint64> shifter_old(old_shape.size());
            std::vector<tor10_uint64> shifter_new(old_shape.size());

            tor10_uint64 accu_old=1,accu_new=1;
            for(tor10_int64 i=old_shape.size()-1;i>=0;i--){
                shifter_old[i] = accu_old;
                shifter_new[i] = accu_new;
                accu_old*=old_shape[i];
                accu_new*=newshape[i];
            }
            std::vector<tor10_uint64> old_inds(old_shape.size());

            tor10_int32 *des = (tor10_int32*)malloc(accu_old*sizeof(tor10_int32));
            tor10_int32 *src = static_cast<tor10_int32*>(in->Mem);

            #ifdef UNI_OMP
            #pragma omp parallel for schedule(dynamic)
            #endif
            for(tor10_uint64 n=0;n<accu_old;n++){
                //calc new id:
                tor10_uint64 j;
                tor10_uint64 old_loc = n;
                for(j=0;j<old_shape.size();j++){
                    old_inds[j] = old_loc/shifter_old[j];
                    old_loc= old_loc%shifter_old[j];
                }
                old_loc =0; // position:
                for(j=0;j<old_shape.size();j++){
                    old_loc += shifter_new[j]*old_inds[mapper[j]];
                }
                des[old_loc] = src[n];
            }
            

            
            boost::intrusive_ptr<Storage_base> out(new Int32Storage());
            if(is_inplace){
                memcpy(in->Mem,des,sizeof(tor10_int32)*accu_old);
                free(des);
                return out;
            }else{
                out->_Init_byptr(des,accu_old);
                return out;
            }

        }

        boost::intrusive_ptr<Storage_base> Movemem_cpu_u32(boost::intrusive_ptr<Storage_base> &in, const std::vector<tor10_uint64> &old_shape, const std::vector<tor10_uint64>&mapper, const std::vector<tor10_uint64> &invmapper, const bool is_inplace){
            #ifdef UNI_DEBUG
            tor10_error_msg(in->dtype_id != tor10type.Uint32,"[DEBUG][internal error] in.dtype is [%s] but call Movemem_cpu with type Uint32",in->dtype().c_str());
            #endif

            std::vector<tor10_uint64> newshape(old_shape.size());
            for(tor10_uint64 i=0;i<old_shape.size();i++)
                newshape[i] = old_shape[mapper[i]];

            std::vector<tor10_uint64> shifter_old(old_shape.size());
            std::vector<tor10_uint64> shifter_new(old_shape.size());

            tor10_uint64 accu_old=1,accu_new=1;
            for(tor10_int64 i=old_shape.size()-1;i>=0;i--){
                shifter_old[i] = accu_old;
                shifter_new[i] = accu_new;
                accu_old*=old_shape[i];
                accu_new*=newshape[i];
            }
            std::vector<tor10_uint64> old_inds(old_shape.size());

            tor10_uint32 *des = (tor10_uint32*)malloc(accu_old*sizeof(tor10_uint32));
            tor10_uint32 *src = static_cast<tor10_uint32*>(in->Mem);

            #ifdef UNI_OMP
            #pragma omp parallel for schedule(dynamic)
            #endif
            for(tor10_uint64 n=0;n<accu_old;n++){
                //calc new id:
                tor10_uint64 j;
                tor10_uint64 old_loc = n;
                for(j=0;j<old_shape.size();j++){
                    old_inds[j] = old_loc/shifter_old[j];
                    old_loc= old_loc%shifter_old[j];
                }
                old_loc =0; // position:
                for(j=0;j<old_shape.size();j++){
                    old_loc += shifter_new[j]*old_inds[mapper[j]];
                }
                des[old_loc] = src[n];
            }
            

            
            boost::intrusive_ptr<Storage_base> out(new Uint32Storage());
            if(is_inplace){
                memcpy(in->Mem,des,sizeof(tor10_uint32)*accu_old);
                free(des);
                return out;
            }else{
                out->_Init_byptr(des,accu_old);
                return out;
            }

        }


    }//namespace utils_internal
}//namespace tor10
