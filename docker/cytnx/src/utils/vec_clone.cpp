#include "utils/vec_clone.hpp"
#include "Tensor.hpp"
#include "Storage.hpp"
#include "Symmetry.hpp"
#include "Bond.hpp"
namespace cytnx{

    template<class T>
    std::vector<T> vec_clone(const std::vector<T>& in_vec){
        std::vector<T> out(in_vec.size());
        for(cytnx_uint64 i=0;i<in_vec.size();i++){
            out[i] = in_vec[i].clone();
        }
        return out;
    }
    template<>
    std::vector<cytnx_complex128> vec_clone(const std::vector<cytnx_complex128> &in_vec){
        std::vector<cytnx_complex128> out(in_vec.size());
        memcpy(&out[0],&in_vec[0],sizeof(cytnx_complex128)*in_vec.size());
        return out;
    }
    template<>
    std::vector<cytnx_complex64> vec_clone(const std::vector<cytnx_complex64> &in_vec){
        std::vector<cytnx_complex64> out(in_vec.size());
        memcpy(&out[0],&in_vec[0],sizeof(cytnx_complex64)*in_vec.size());
        return out;
    }
    template<>
    std::vector<cytnx_double> vec_clone(const std::vector<cytnx_double> &in_vec){
        std::vector<cytnx_double> out(in_vec.size());
        memcpy(&out[0],&in_vec[0],sizeof(cytnx_double)*in_vec.size());
        return out;
    }
    template<>
    std::vector<cytnx_float> vec_clone(const std::vector<cytnx_float> &in_vec){
        std::vector<cytnx_float> out(in_vec.size());
        memcpy(&out[0],&in_vec[0],sizeof(cytnx_float)*in_vec.size());
        return out;
    }
    template<>
    std::vector<cytnx_int64> vec_clone(const std::vector<cytnx_int64> &in_vec){
        std::vector<cytnx_int64> out(in_vec.size());
        memcpy(&out[0],&in_vec[0],sizeof(cytnx_int64)*in_vec.size());
        return out;
    }
    template<>
    std::vector<cytnx_uint64> vec_clone(const std::vector<cytnx_uint64> &in_vec){
        std::vector<cytnx_uint64> out(in_vec.size());
        memcpy(&out[0],&in_vec[0],sizeof(cytnx_uint64)*in_vec.size());
        return out;
    }
    template<>
    std::vector<cytnx_int32> vec_clone(const std::vector<cytnx_int32> &in_vec){
        std::vector<cytnx_int32> out(in_vec.size());
        memcpy(&out[0],&in_vec[0],sizeof(cytnx_int32)*in_vec.size());
        return out;
    }
    template<>
    std::vector<cytnx_uint32> vec_clone(const std::vector<cytnx_uint32> &in_vec){
        std::vector<cytnx_uint32> out(in_vec.size());
        memcpy(&out[0],&in_vec[0],sizeof(cytnx_uint32)*in_vec.size());
        return out;
    }
    //=======================================================

    template<class T>
    std::vector<T> vec_clone(const std::vector<T>& in_vec, const cytnx_uint64 &Nelem){
        cytnx_error_msg(Nelem > in_vec.size(),"[ERROR] Nelem cannot exceed the no. of elements in the in_vec%s","\n");
        std::vector<T> out(Nelem);
        for(cytnx_uint64 i=0;i<Nelem;i++){
            out[i] = in_vec[i].clone();
        }
        return out;
    }

    template<>
    std::vector<cytnx_complex128> vec_clone(const std::vector<cytnx_complex128> &in_vec, const cytnx_uint64 &Nelem){
        cytnx_error_msg(Nelem > in_vec.size(),"[ERROR] Nelem cannot exceed the no. of elements in the in_vec%s","\n");
        std::vector<cytnx_complex128> out(Nelem);
        memcpy(&out[0],&in_vec[0],sizeof(cytnx_complex128)*Nelem);
        return out;
    }
    template<>
    std::vector<cytnx_complex64> vec_clone(const std::vector<cytnx_complex64> &in_vec, const cytnx_uint64 &Nelem){
        cytnx_error_msg(Nelem > in_vec.size(),"[ERROR] Nelem cannot exceed the no. of elements in the in_vec%s","\n");
        std::vector<cytnx_complex64> out(Nelem);
        memcpy(&out[0],&in_vec[0],sizeof(cytnx_complex64)*Nelem);
        return out;
    }
    template<>
    std::vector<cytnx_double> vec_clone(const std::vector<cytnx_double> &in_vec, const cytnx_uint64 &Nelem){
        cytnx_error_msg(Nelem > in_vec.size(),"[ERROR] Nelem cannot exceed the no. of elements in the in_vec%s","\n");
        std::vector<cytnx_double> out(Nelem);
        memcpy(&out[0],&in_vec[0],sizeof(cytnx_double)*Nelem);
        return out;
    }
    template<>
    std::vector<cytnx_float> vec_clone(const std::vector<cytnx_float> &in_vec, const cytnx_uint64 &Nelem){
        cytnx_error_msg(Nelem > in_vec.size(),"[ERROR] Nelem cannot exceed the no. of elements in the in_vec%s","\n");
        std::vector<cytnx_float> out(Nelem);
        memcpy(&out[0],&in_vec[0],sizeof(cytnx_float)*Nelem);
        return out;
    }
    template<>
    std::vector<cytnx_int64> vec_clone(const std::vector<cytnx_int64> &in_vec, const cytnx_uint64 &Nelem){
        cytnx_error_msg(Nelem > in_vec.size(),"[ERROR] Nelem cannot exceed the no. of elements in the in_vec%s","\n");
        std::vector<cytnx_int64> out(Nelem);
        memcpy(&out[0],&in_vec[0],sizeof(cytnx_int64)*Nelem);
        return out;
    }
    template<>
    std::vector<cytnx_uint64> vec_clone(const std::vector<cytnx_uint64> &in_vec, const cytnx_uint64 &Nelem){
        cytnx_error_msg(Nelem > in_vec.size(),"[ERROR] Nelem cannot exceed the no. of elements in the in_vec%s","\n");
        std::vector<cytnx_uint64> out(Nelem);
        memcpy(&out[0],&in_vec[0],sizeof(cytnx_uint64)*Nelem);
        return out;
    }
    template<>
    std::vector<cytnx_int32> vec_clone(const std::vector<cytnx_int32> &in_vec, const cytnx_uint64 &Nelem){
        cytnx_error_msg(Nelem > in_vec.size(),"[ERROR] Nelem cannot exceed the no. of elements in the in_vec%s","\n");
        std::vector<cytnx_int32> out(Nelem);
        memcpy(&out[0],&in_vec[0],sizeof(cytnx_int32)*Nelem);
        return out;
    }
    template<>
    std::vector<cytnx_uint32> vec_clone(const std::vector<cytnx_uint32> &in_vec, const cytnx_uint64 &Nelem){
        cytnx_error_msg(Nelem > in_vec.size(),"[ERROR] Nelem cannot exceed the no. of elements in the in_vec%s","\n");
        std::vector<cytnx_uint32> out(Nelem);
        memcpy(&out[0],&in_vec[0],sizeof(cytnx_uint32)*Nelem);
        return out;
    }

    //========================================================
    template<class T>
    std::vector<T> vec_clone(const std::vector<T>& in_vec, const std::vector<cytnx_uint64> &locators ){
        std::vector<T> out(locators.size());
        for(cytnx_uint64 i=0;i<locators.size();i++){
            cytnx_error_msg(locators[i] >= in_vec.size(),"[ERROR] the index [%d] in locators exceed the bbound.\n",locators[i]);
            out[i] = in_vec[locators[i]].clone();
        }
        return out;
    }
    
    template<>
    std::vector<cytnx_complex128> vec_clone(const std::vector<cytnx_complex128>& in_vec, const std::vector<cytnx_uint64> &locators ){
        std::vector<cytnx_complex128> out(locators.size());
        for(cytnx_uint64 i=0;i<locators.size();i++){
            cytnx_error_msg(locators[i] >= in_vec.size(),"[ERROR] the index [%d] in locators exceed the bbound.\n",locators[i]);
            out[i] = in_vec[locators[i]];
        }
        return out;
    }
    template<>
    std::vector<cytnx_complex64> vec_clone(const std::vector<cytnx_complex64>& in_vec, const std::vector<cytnx_uint64> &locators ){
        std::vector<cytnx_complex64> out(locators.size());
        for(cytnx_uint64 i=0;i<locators.size();i++){
            cytnx_error_msg(locators[i] >= in_vec.size(),"[ERROR] the index [%d] in locators exceed the bbound.\n",locators[i]);
            out[i] = in_vec[locators[i]];
        }
        return out;
    }
    template<>
    std::vector<double> vec_clone(const std::vector<double>& in_vec, const std::vector<cytnx_uint64> &locators ){
        std::vector<double> out(locators.size());
        for(cytnx_uint64 i=0;i<locators.size();i++){
            cytnx_error_msg(locators[i] >= in_vec.size(),"[ERROR] the index [%d] in locators exceed the bbound.\n",locators[i]);
            out[i] = in_vec[locators[i]];
        }
        return out;
    }
    template<>
    std::vector<float> vec_clone(const std::vector<float>& in_vec, const std::vector<cytnx_uint64> &locators ){
        std::vector<float> out(locators.size());
        for(cytnx_uint64 i=0;i<locators.size();i++){
            cytnx_error_msg(locators[i] >= in_vec.size(),"[ERROR] the index [%d] in locators exceed the bbound.\n",locators[i]);
            out[i] = in_vec[locators[i]];
        }
        return out;
    }
    template<>
    std::vector<cytnx_int64> vec_clone(const std::vector<cytnx_int64>& in_vec, const std::vector<cytnx_uint64> &locators ){
        std::vector<cytnx_int64> out(locators.size());
        for(cytnx_uint64 i=0;i<locators.size();i++){
            cytnx_error_msg(locators[i] >= in_vec.size(),"[ERROR] the index [%d] in locators exceed the bbound.\n",locators[i]);
            out[i] = in_vec[locators[i]];
        }
        return out;
    }
    template<>
    std::vector<cytnx_uint64> vec_clone(const std::vector<cytnx_uint64>& in_vec, const std::vector<cytnx_uint64> &locators ){
        std::vector<cytnx_uint64> out(locators.size());
        for(cytnx_uint64 i=0;i<locators.size();i++){
            cytnx_error_msg(locators[i] >= in_vec.size(),"[ERROR] the index [%d] in locators exceed the bbound.\n",locators[i]);
            out[i] = in_vec[locators[i]];
        }
        return out;
    }
    template<>
    std::vector<cytnx_int32> vec_clone(const std::vector<cytnx_int32>& in_vec, const std::vector<cytnx_uint64> &locators ){
        std::vector<cytnx_int32> out(locators.size());
        for(cytnx_uint64 i=0;i<locators.size();i++){
            cytnx_error_msg(locators[i] >= in_vec.size(),"[ERROR] the index [%d] in locators exceed the bbound.\n",locators[i]);
            out[i] = in_vec[locators[i]];
        }
        return out;
    }
    template<>
    std::vector<cytnx_uint32> vec_clone(const std::vector<cytnx_uint32>& in_vec, const std::vector<cytnx_uint64> &locators ){
        std::vector<cytnx_uint32> out(locators.size());
        for(cytnx_uint64 i=0;i<locators.size();i++){
            cytnx_error_msg(locators[i] >= in_vec.size(),"[ERROR] the index [%d] in locators exceed the bbound.\n",locators[i]);
            out[i] = in_vec[locators[i]];
        }
        return out;
    }


    template std::vector<Bond> vec_clone<Bond>(const std::vector<Bond>&);
    template std::vector<Symmetry> vec_clone<Symmetry>(const std::vector<Symmetry>&);
    template std::vector<Tensor> vec_clone<Tensor>(const std::vector<Tensor>&);
    template std::vector<Storage> vec_clone<Storage>(const std::vector<Storage>&);
    
    template std::vector<Bond> vec_clone<Bond>(const std::vector<Bond>&, const cytnx_uint64 &);
    template std::vector<Symmetry> vec_clone<Symmetry>(const std::vector<Symmetry>&, const cytnx_uint64 &);
    template std::vector<Tensor> vec_clone<Tensor>(const std::vector<Tensor>&, const cytnx_uint64 &);
    template std::vector<Storage> vec_clone<Storage>(const std::vector<Storage>&, const cytnx_uint64 &);


    template std::vector<Bond> vec_clone<Bond>(const std::vector<Bond>&, const std::vector<cytnx_uint64> &);
    template std::vector<Symmetry> vec_clone<Symmetry>(const std::vector<Symmetry>&, const std::vector<cytnx_uint64> &);
    template std::vector<Tensor> vec_clone<Tensor>(const std::vector<Tensor>&, const std::vector<cytnx_uint64> &);
    template std::vector<Storage> vec_clone<Storage>(const std::vector<Storage>&, const std::vector<cytnx_uint64> &);



}