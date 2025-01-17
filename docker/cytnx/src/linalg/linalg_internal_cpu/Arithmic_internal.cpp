#include "linalg/linalg_internal_cpu/Arithmic_internal.hpp"

namespace cytnx {
  namespace linalg_internal {

    void Arithmic_internal_cdtcd(boost::intrusive_ptr<Storage_base> &out,
                                 boost::intrusive_ptr<Storage_base> &Lin,
                                 boost::intrusive_ptr<Storage_base> &Rin,
                                 const unsigned long long &len,
                                 const std::vector<cytnx_uint64> &shape,
                                 const std::vector<cytnx_uint64> &invmapper_L,
                                 const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_cdtcd(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_cdtcd(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_cdtcd(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_cdtcd(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_cdtcd(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
    }
    void Arithmic_internal_cdtcf(boost::intrusive_ptr<Storage_base> &out,
                                 boost::intrusive_ptr<Storage_base> &Lin,
                                 boost::intrusive_ptr<Storage_base> &Rin,
                                 const unsigned long long &len,
                                 const std::vector<cytnx_uint64> &shape,
                                 const std::vector<cytnx_uint64> &invmapper_L,
                                 const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_cdtcf(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_cdtcf(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_cdtcf(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_cdtcf(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_cdtcf(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
    }
    void Arithmic_internal_cdtd(boost::intrusive_ptr<Storage_base> &out,
                                boost::intrusive_ptr<Storage_base> &Lin,
                                boost::intrusive_ptr<Storage_base> &Rin,
                                const unsigned long long &len,
                                const std::vector<cytnx_uint64> &shape,
                                const std::vector<cytnx_uint64> &invmapper_L,
                                const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_cdtd(out, Lin, Rin, len, shape, invmapper_L,
                                                  invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_cdtd(out, Lin, Rin, len, shape, invmapper_L,
                                                  invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_cdtd(out, Lin, Rin, len, shape, invmapper_L,
                                                  invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_cdtd(out, Lin, Rin, len, shape, invmapper_L,
                                                  invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_cdtd(out, Lin, Rin, len, shape, invmapper_L,
                                                  invmapper_R);
    }
    void Arithmic_internal_cdtf(boost::intrusive_ptr<Storage_base> &out,
                                boost::intrusive_ptr<Storage_base> &Lin,
                                boost::intrusive_ptr<Storage_base> &Rin,
                                const unsigned long long &len,
                                const std::vector<cytnx_uint64> &shape,
                                const std::vector<cytnx_uint64> &invmapper_L,
                                const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_cdtf(out, Lin, Rin, len, shape, invmapper_L,
                                                  invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_cdtf(out, Lin, Rin, len, shape, invmapper_L,
                                                  invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_cdtf(out, Lin, Rin, len, shape, invmapper_L,
                                                  invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_cdtf(out, Lin, Rin, len, shape, invmapper_L,
                                                  invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_cdtf(out, Lin, Rin, len, shape, invmapper_L,
                                                  invmapper_R);
    }
    void Arithmic_internal_cdtu64(boost::intrusive_ptr<Storage_base> &out,
                                  boost::intrusive_ptr<Storage_base> &Lin,
                                  boost::intrusive_ptr<Storage_base> &Rin,
                                  const unsigned long long &len,
                                  const std::vector<cytnx_uint64> &shape,
                                  const std::vector<cytnx_uint64> &invmapper_L,
                                  const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_cdtu64(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_cdtu64(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_cdtu64(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_cdtu64(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_cdtu64(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
    }
    void Arithmic_internal_cdti64(boost::intrusive_ptr<Storage_base> &out,
                                  boost::intrusive_ptr<Storage_base> &Lin,
                                  boost::intrusive_ptr<Storage_base> &Rin,
                                  const unsigned long long &len,
                                  const std::vector<cytnx_uint64> &shape,
                                  const std::vector<cytnx_uint64> &invmapper_L,
                                  const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_cdti64(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_cdti64(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_cdti64(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_cdti64(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_cdti64(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
    }
    void Arithmic_internal_cdtu32(boost::intrusive_ptr<Storage_base> &out,
                                  boost::intrusive_ptr<Storage_base> &Lin,
                                  boost::intrusive_ptr<Storage_base> &Rin,
                                  const unsigned long long &len,
                                  const std::vector<cytnx_uint64> &shape,
                                  const std::vector<cytnx_uint64> &invmapper_L,
                                  const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_cdtu32(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_cdtu32(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_cdtu32(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_cdtu32(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_cdtu32(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
    }
    void Arithmic_internal_cdti32(boost::intrusive_ptr<Storage_base> &out,
                                  boost::intrusive_ptr<Storage_base> &Lin,
                                  boost::intrusive_ptr<Storage_base> &Rin,
                                  const unsigned long long &len,
                                  const std::vector<cytnx_uint64> &shape,
                                  const std::vector<cytnx_uint64> &invmapper_L,
                                  const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_cdti32(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_cdti32(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_cdti32(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_cdti32(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_cdti32(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
    }
    void Arithmic_internal_cdti16(boost::intrusive_ptr<Storage_base> &out,
                                  boost::intrusive_ptr<Storage_base> &Lin,
                                  boost::intrusive_ptr<Storage_base> &Rin,
                                  const unsigned long long &len,
                                  const std::vector<cytnx_uint64> &shape,
                                  const std::vector<cytnx_uint64> &invmapper_L,
                                  const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_cdti16(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_cdti16(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_cdti16(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_cdti16(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_cdti16(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
    }
    void Arithmic_internal_cdtu16(boost::intrusive_ptr<Storage_base> &out,
                                  boost::intrusive_ptr<Storage_base> &Lin,
                                  boost::intrusive_ptr<Storage_base> &Rin,
                                  const unsigned long long &len,
                                  const std::vector<cytnx_uint64> &shape,
                                  const std::vector<cytnx_uint64> &invmapper_L,
                                  const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_cdtu16(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_cdtu16(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_cdtu16(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_cdtu16(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_cdtu16(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
    }
    void Arithmic_internal_cdtb(boost::intrusive_ptr<Storage_base> &out,
                                boost::intrusive_ptr<Storage_base> &Lin,
                                boost::intrusive_ptr<Storage_base> &Rin,
                                const unsigned long long &len,
                                const std::vector<cytnx_uint64> &shape,
                                const std::vector<cytnx_uint64> &invmapper_L,
                                const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_cdtb(out, Lin, Rin, len, shape, invmapper_L,
                                                  invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_cdtb(out, Lin, Rin, len, shape, invmapper_L,
                                                  invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_cdtb(out, Lin, Rin, len, shape, invmapper_L,
                                                  invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_cdtb(out, Lin, Rin, len, shape, invmapper_L,
                                                  invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_cdtb(out, Lin, Rin, len, shape, invmapper_L,
                                                  invmapper_R);
    }
    //-----------------------
    void Arithmic_internal_cftcd(boost::intrusive_ptr<Storage_base> &out,
                                 boost::intrusive_ptr<Storage_base> &Lin,
                                 boost::intrusive_ptr<Storage_base> &Rin,
                                 const unsigned long long &len,
                                 const std::vector<cytnx_uint64> &shape,
                                 const std::vector<cytnx_uint64> &invmapper_L,
                                 const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_cftcd(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_cftcd(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_cftcd(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_cftcd(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_cftcd(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
    }
    void Arithmic_internal_cftcf(boost::intrusive_ptr<Storage_base> &out,
                                 boost::intrusive_ptr<Storage_base> &Lin,
                                 boost::intrusive_ptr<Storage_base> &Rin,
                                 const unsigned long long &len,
                                 const std::vector<cytnx_uint64> &shape,
                                 const std::vector<cytnx_uint64> &invmapper_L,
                                 const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_cftcf(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_cftcf(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_cftcf(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_cftcf(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_cftcf(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
    }
    void Arithmic_internal_cftd(boost::intrusive_ptr<Storage_base> &out,
                                boost::intrusive_ptr<Storage_base> &Lin,
                                boost::intrusive_ptr<Storage_base> &Rin,
                                const unsigned long long &len,
                                const std::vector<cytnx_uint64> &shape,
                                const std::vector<cytnx_uint64> &invmapper_L,
                                const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_cftd(out, Lin, Rin, len, shape, invmapper_L,
                                                  invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_cftd(out, Lin, Rin, len, shape, invmapper_L,
                                                  invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_cftd(out, Lin, Rin, len, shape, invmapper_L,
                                                  invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_cftd(out, Lin, Rin, len, shape, invmapper_L,
                                                  invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_cftd(out, Lin, Rin, len, shape, invmapper_L,
                                                  invmapper_R);
    }
    void Arithmic_internal_cftf(boost::intrusive_ptr<Storage_base> &out,
                                boost::intrusive_ptr<Storage_base> &Lin,
                                boost::intrusive_ptr<Storage_base> &Rin,
                                const unsigned long long &len,
                                const std::vector<cytnx_uint64> &shape,
                                const std::vector<cytnx_uint64> &invmapper_L,
                                const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_cftf(out, Lin, Rin, len, shape, invmapper_L,
                                                  invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_cftf(out, Lin, Rin, len, shape, invmapper_L,
                                                  invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_cftf(out, Lin, Rin, len, shape, invmapper_L,
                                                  invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_cftf(out, Lin, Rin, len, shape, invmapper_L,
                                                  invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_cftf(out, Lin, Rin, len, shape, invmapper_L,
                                                  invmapper_R);
    }
    void Arithmic_internal_cftu64(boost::intrusive_ptr<Storage_base> &out,
                                  boost::intrusive_ptr<Storage_base> &Lin,
                                  boost::intrusive_ptr<Storage_base> &Rin,
                                  const unsigned long long &len,
                                  const std::vector<cytnx_uint64> &shape,
                                  const std::vector<cytnx_uint64> &invmapper_L,
                                  const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_cftu64(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_cftu64(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_cftu64(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_cftu64(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_cftu64(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
    }
    void Arithmic_internal_cfti64(boost::intrusive_ptr<Storage_base> &out,
                                  boost::intrusive_ptr<Storage_base> &Lin,
                                  boost::intrusive_ptr<Storage_base> &Rin,
                                  const unsigned long long &len,
                                  const std::vector<cytnx_uint64> &shape,
                                  const std::vector<cytnx_uint64> &invmapper_L,
                                  const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_cfti64(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_cfti64(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_cfti64(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_cfti64(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_cfti64(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
    }
    void Arithmic_internal_cftu32(boost::intrusive_ptr<Storage_base> &out,
                                  boost::intrusive_ptr<Storage_base> &Lin,
                                  boost::intrusive_ptr<Storage_base> &Rin,
                                  const unsigned long long &len,
                                  const std::vector<cytnx_uint64> &shape,
                                  const std::vector<cytnx_uint64> &invmapper_L,
                                  const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_cftu32(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_cftu32(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_cftu32(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_cftu32(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_cftu32(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
    }
    void Arithmic_internal_cfti32(boost::intrusive_ptr<Storage_base> &out,
                                  boost::intrusive_ptr<Storage_base> &Lin,
                                  boost::intrusive_ptr<Storage_base> &Rin,
                                  const unsigned long long &len,
                                  const std::vector<cytnx_uint64> &shape,
                                  const std::vector<cytnx_uint64> &invmapper_L,
                                  const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_cfti32(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_cfti32(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_cfti32(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_cfti32(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_cfti32(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
    }
    void Arithmic_internal_cfti16(boost::intrusive_ptr<Storage_base> &out,
                                  boost::intrusive_ptr<Storage_base> &Lin,
                                  boost::intrusive_ptr<Storage_base> &Rin,
                                  const unsigned long long &len,
                                  const std::vector<cytnx_uint64> &shape,
                                  const std::vector<cytnx_uint64> &invmapper_L,
                                  const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_cfti16(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_cfti16(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_cfti16(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_cfti16(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_cfti16(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
    }
    void Arithmic_internal_cftu16(boost::intrusive_ptr<Storage_base> &out,
                                  boost::intrusive_ptr<Storage_base> &Lin,
                                  boost::intrusive_ptr<Storage_base> &Rin,
                                  const unsigned long long &len,
                                  const std::vector<cytnx_uint64> &shape,
                                  const std::vector<cytnx_uint64> &invmapper_L,
                                  const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_cftu16(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_cftu16(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_cftu16(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_cftu16(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_cftu16(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
    }
    void Arithmic_internal_cftb(boost::intrusive_ptr<Storage_base> &out,
                                boost::intrusive_ptr<Storage_base> &Lin,
                                boost::intrusive_ptr<Storage_base> &Rin,
                                const unsigned long long &len,
                                const std::vector<cytnx_uint64> &shape,
                                const std::vector<cytnx_uint64> &invmapper_L,
                                const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_cftb(out, Lin, Rin, len, shape, invmapper_L,
                                                  invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_cftb(out, Lin, Rin, len, shape, invmapper_L,
                                                  invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_cftb(out, Lin, Rin, len, shape, invmapper_L,
                                                  invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_cftb(out, Lin, Rin, len, shape, invmapper_L,
                                                  invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_cftb(out, Lin, Rin, len, shape, invmapper_L,
                                                  invmapper_R);
    }
    //---------------------------
    void Arithmic_internal_dtcd(boost::intrusive_ptr<Storage_base> &out,
                                boost::intrusive_ptr<Storage_base> &Lin,
                                boost::intrusive_ptr<Storage_base> &Rin,
                                const unsigned long long &len,
                                const std::vector<cytnx_uint64> &shape,
                                const std::vector<cytnx_uint64> &invmapper_L,
                                const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_dtcd(out, Lin, Rin, len, shape, invmapper_L,
                                                  invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_dtcd(out, Lin, Rin, len, shape, invmapper_L,
                                                  invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_dtcd(out, Lin, Rin, len, shape, invmapper_L,
                                                  invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_dtcd(out, Lin, Rin, len, shape, invmapper_L,
                                                  invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_dtcd(out, Lin, Rin, len, shape, invmapper_L,
                                                  invmapper_R);
    }
    void Arithmic_internal_dtcf(boost::intrusive_ptr<Storage_base> &out,
                                boost::intrusive_ptr<Storage_base> &Lin,
                                boost::intrusive_ptr<Storage_base> &Rin,
                                const unsigned long long &len,
                                const std::vector<cytnx_uint64> &shape,
                                const std::vector<cytnx_uint64> &invmapper_L,
                                const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_dtcf(out, Lin, Rin, len, shape, invmapper_L,
                                                  invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_dtcf(out, Lin, Rin, len, shape, invmapper_L,
                                                  invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_dtcf(out, Lin, Rin, len, shape, invmapper_L,
                                                  invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_dtcf(out, Lin, Rin, len, shape, invmapper_L,
                                                  invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_dtcf(out, Lin, Rin, len, shape, invmapper_L,
                                                  invmapper_R);
    }
    void Arithmic_internal_dtd(boost::intrusive_ptr<Storage_base> &out,
                               boost::intrusive_ptr<Storage_base> &Lin,
                               boost::intrusive_ptr<Storage_base> &Rin,
                               const unsigned long long &len,
                               const std::vector<cytnx_uint64> &shape,
                               const std::vector<cytnx_uint64> &invmapper_L,
                               const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_dtd(out, Lin, Rin, len, shape, invmapper_L,
                                                 invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_dtd(out, Lin, Rin, len, shape, invmapper_L,
                                                 invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_dtd(out, Lin, Rin, len, shape, invmapper_L,
                                                 invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_dtd(out, Lin, Rin, len, shape, invmapper_L,
                                                 invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_dtd(out, Lin, Rin, len, shape, invmapper_L,
                                                 invmapper_R);
    }
    void Arithmic_internal_dtf(boost::intrusive_ptr<Storage_base> &out,
                               boost::intrusive_ptr<Storage_base> &Lin,
                               boost::intrusive_ptr<Storage_base> &Rin,
                               const unsigned long long &len,
                               const std::vector<cytnx_uint64> &shape,
                               const std::vector<cytnx_uint64> &invmapper_L,
                               const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_dtf(out, Lin, Rin, len, shape, invmapper_L,
                                                 invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_dtf(out, Lin, Rin, len, shape, invmapper_L,
                                                 invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_dtf(out, Lin, Rin, len, shape, invmapper_L,
                                                 invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_dtf(out, Lin, Rin, len, shape, invmapper_L,
                                                 invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_dtf(out, Lin, Rin, len, shape, invmapper_L,
                                                 invmapper_R);
    }
    void Arithmic_internal_dtu64(boost::intrusive_ptr<Storage_base> &out,
                                 boost::intrusive_ptr<Storage_base> &Lin,
                                 boost::intrusive_ptr<Storage_base> &Rin,
                                 const unsigned long long &len,
                                 const std::vector<cytnx_uint64> &shape,
                                 const std::vector<cytnx_uint64> &invmapper_L,
                                 const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_dtu64(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_dtu64(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_dtu64(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_dtu64(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_dtu64(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
    }
    void Arithmic_internal_dti64(boost::intrusive_ptr<Storage_base> &out,
                                 boost::intrusive_ptr<Storage_base> &Lin,
                                 boost::intrusive_ptr<Storage_base> &Rin,
                                 const unsigned long long &len,
                                 const std::vector<cytnx_uint64> &shape,
                                 const std::vector<cytnx_uint64> &invmapper_L,
                                 const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_dti64(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_dti64(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_dti64(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_dti64(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_dti64(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
    }
    void Arithmic_internal_dtu32(boost::intrusive_ptr<Storage_base> &out,
                                 boost::intrusive_ptr<Storage_base> &Lin,
                                 boost::intrusive_ptr<Storage_base> &Rin,
                                 const unsigned long long &len,
                                 const std::vector<cytnx_uint64> &shape,
                                 const std::vector<cytnx_uint64> &invmapper_L,
                                 const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_dtu32(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_dtu32(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_dtu32(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_dtu32(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_dtu32(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
    }
    void Arithmic_internal_dti32(boost::intrusive_ptr<Storage_base> &out,
                                 boost::intrusive_ptr<Storage_base> &Lin,
                                 boost::intrusive_ptr<Storage_base> &Rin,
                                 const unsigned long long &len,
                                 const std::vector<cytnx_uint64> &shape,
                                 const std::vector<cytnx_uint64> &invmapper_L,
                                 const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_dti32(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_dti32(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_dti32(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_dti32(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_dti32(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
    }
    void Arithmic_internal_dti16(boost::intrusive_ptr<Storage_base> &out,
                                 boost::intrusive_ptr<Storage_base> &Lin,
                                 boost::intrusive_ptr<Storage_base> &Rin,
                                 const unsigned long long &len,
                                 const std::vector<cytnx_uint64> &shape,
                                 const std::vector<cytnx_uint64> &invmapper_L,
                                 const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_dti16(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_dti16(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_dti16(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_dti16(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_dti16(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
    }
    void Arithmic_internal_dtu16(boost::intrusive_ptr<Storage_base> &out,
                                 boost::intrusive_ptr<Storage_base> &Lin,
                                 boost::intrusive_ptr<Storage_base> &Rin,
                                 const unsigned long long &len,
                                 const std::vector<cytnx_uint64> &shape,
                                 const std::vector<cytnx_uint64> &invmapper_L,
                                 const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_dtu16(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_dtu16(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_dtu16(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_dtu16(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_dtu16(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
    }
    void Arithmic_internal_dtb(boost::intrusive_ptr<Storage_base> &out,
                               boost::intrusive_ptr<Storage_base> &Lin,
                               boost::intrusive_ptr<Storage_base> &Rin,
                               const unsigned long long &len,
                               const std::vector<cytnx_uint64> &shape,
                               const std::vector<cytnx_uint64> &invmapper_L,
                               const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_dtb(out, Lin, Rin, len, shape, invmapper_L,
                                                 invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_dtb(out, Lin, Rin, len, shape, invmapper_L,
                                                 invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_dtb(out, Lin, Rin, len, shape, invmapper_L,
                                                 invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_dtb(out, Lin, Rin, len, shape, invmapper_L,
                                                 invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_dtb(out, Lin, Rin, len, shape, invmapper_L,
                                                 invmapper_R);
    }
    //----------------------
    void Arithmic_internal_ftcd(boost::intrusive_ptr<Storage_base> &out,
                                boost::intrusive_ptr<Storage_base> &Lin,
                                boost::intrusive_ptr<Storage_base> &Rin,
                                const unsigned long long &len,
                                const std::vector<cytnx_uint64> &shape,
                                const std::vector<cytnx_uint64> &invmapper_L,
                                const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_ftcd(out, Lin, Rin, len, shape, invmapper_L,
                                                  invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_ftcd(out, Lin, Rin, len, shape, invmapper_L,
                                                  invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_ftcd(out, Lin, Rin, len, shape, invmapper_L,
                                                  invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_ftcd(out, Lin, Rin, len, shape, invmapper_L,
                                                  invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_ftcd(out, Lin, Rin, len, shape, invmapper_L,
                                                  invmapper_R);
    }
    void Arithmic_internal_ftcf(boost::intrusive_ptr<Storage_base> &out,
                                boost::intrusive_ptr<Storage_base> &Lin,
                                boost::intrusive_ptr<Storage_base> &Rin,
                                const unsigned long long &len,
                                const std::vector<cytnx_uint64> &shape,
                                const std::vector<cytnx_uint64> &invmapper_L,
                                const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_ftcf(out, Lin, Rin, len, shape, invmapper_L,
                                                  invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_ftcf(out, Lin, Rin, len, shape, invmapper_L,
                                                  invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_ftcf(out, Lin, Rin, len, shape, invmapper_L,
                                                  invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_ftcf(out, Lin, Rin, len, shape, invmapper_L,
                                                  invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_ftcf(out, Lin, Rin, len, shape, invmapper_L,
                                                  invmapper_R);
    }
    void Arithmic_internal_ftd(boost::intrusive_ptr<Storage_base> &out,
                               boost::intrusive_ptr<Storage_base> &Lin,
                               boost::intrusive_ptr<Storage_base> &Rin,
                               const unsigned long long &len,
                               const std::vector<cytnx_uint64> &shape,
                               const std::vector<cytnx_uint64> &invmapper_L,
                               const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_ftd(out, Lin, Rin, len, shape, invmapper_L,
                                                 invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_ftd(out, Lin, Rin, len, shape, invmapper_L,
                                                 invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_ftd(out, Lin, Rin, len, shape, invmapper_L,
                                                 invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_ftd(out, Lin, Rin, len, shape, invmapper_L,
                                                 invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_ftd(out, Lin, Rin, len, shape, invmapper_L,
                                                 invmapper_R);
    }
    void Arithmic_internal_ftf(boost::intrusive_ptr<Storage_base> &out,
                               boost::intrusive_ptr<Storage_base> &Lin,
                               boost::intrusive_ptr<Storage_base> &Rin,
                               const unsigned long long &len,
                               const std::vector<cytnx_uint64> &shape,
                               const std::vector<cytnx_uint64> &invmapper_L,
                               const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_ftf(out, Lin, Rin, len, shape, invmapper_L,
                                                 invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_ftf(out, Lin, Rin, len, shape, invmapper_L,
                                                 invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_ftf(out, Lin, Rin, len, shape, invmapper_L,
                                                 invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_ftf(out, Lin, Rin, len, shape, invmapper_L,
                                                 invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_ftf(out, Lin, Rin, len, shape, invmapper_L,
                                                 invmapper_R);
    }
    void Arithmic_internal_ftu64(boost::intrusive_ptr<Storage_base> &out,
                                 boost::intrusive_ptr<Storage_base> &Lin,
                                 boost::intrusive_ptr<Storage_base> &Rin,
                                 const unsigned long long &len,
                                 const std::vector<cytnx_uint64> &shape,
                                 const std::vector<cytnx_uint64> &invmapper_L,
                                 const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_ftu64(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_ftu64(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_ftu64(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_ftu64(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_ftu64(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
    }
    void Arithmic_internal_fti64(boost::intrusive_ptr<Storage_base> &out,
                                 boost::intrusive_ptr<Storage_base> &Lin,
                                 boost::intrusive_ptr<Storage_base> &Rin,
                                 const unsigned long long &len,
                                 const std::vector<cytnx_uint64> &shape,
                                 const std::vector<cytnx_uint64> &invmapper_L,
                                 const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_fti64(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_fti64(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_fti64(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_fti64(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_fti64(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
    }
    void Arithmic_internal_ftu32(boost::intrusive_ptr<Storage_base> &out,
                                 boost::intrusive_ptr<Storage_base> &Lin,
                                 boost::intrusive_ptr<Storage_base> &Rin,
                                 const unsigned long long &len,
                                 const std::vector<cytnx_uint64> &shape,
                                 const std::vector<cytnx_uint64> &invmapper_L,
                                 const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_ftu32(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_ftu32(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_ftu32(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_ftu32(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_ftu32(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
    }
    void Arithmic_internal_fti32(boost::intrusive_ptr<Storage_base> &out,
                                 boost::intrusive_ptr<Storage_base> &Lin,
                                 boost::intrusive_ptr<Storage_base> &Rin,
                                 const unsigned long long &len,
                                 const std::vector<cytnx_uint64> &shape,
                                 const std::vector<cytnx_uint64> &invmapper_L,
                                 const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_fti32(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_fti32(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_fti32(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_fti32(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_fti32(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
    }
    void Arithmic_internal_fti16(boost::intrusive_ptr<Storage_base> &out,
                                 boost::intrusive_ptr<Storage_base> &Lin,
                                 boost::intrusive_ptr<Storage_base> &Rin,
                                 const unsigned long long &len,
                                 const std::vector<cytnx_uint64> &shape,
                                 const std::vector<cytnx_uint64> &invmapper_L,
                                 const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_fti16(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_fti16(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_fti16(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_fti16(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_fti16(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
    }
    void Arithmic_internal_ftu16(boost::intrusive_ptr<Storage_base> &out,
                                 boost::intrusive_ptr<Storage_base> &Lin,
                                 boost::intrusive_ptr<Storage_base> &Rin,
                                 const unsigned long long &len,
                                 const std::vector<cytnx_uint64> &shape,
                                 const std::vector<cytnx_uint64> &invmapper_L,
                                 const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_ftu16(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_ftu16(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_ftu16(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_ftu16(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_ftu16(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
    }
    void Arithmic_internal_ftb(boost::intrusive_ptr<Storage_base> &out,
                               boost::intrusive_ptr<Storage_base> &Lin,
                               boost::intrusive_ptr<Storage_base> &Rin,
                               const unsigned long long &len,
                               const std::vector<cytnx_uint64> &shape,
                               const std::vector<cytnx_uint64> &invmapper_L,
                               const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_ftb(out, Lin, Rin, len, shape, invmapper_L,
                                                 invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_ftb(out, Lin, Rin, len, shape, invmapper_L,
                                                 invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_ftb(out, Lin, Rin, len, shape, invmapper_L,
                                                 invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_ftb(out, Lin, Rin, len, shape, invmapper_L,
                                                 invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_ftb(out, Lin, Rin, len, shape, invmapper_L,
                                                 invmapper_R);
    }

    //-----------------------
    void Arithmic_internal_u64tcd(boost::intrusive_ptr<Storage_base> &out,
                                  boost::intrusive_ptr<Storage_base> &Lin,
                                  boost::intrusive_ptr<Storage_base> &Rin,
                                  const unsigned long long &len,
                                  const std::vector<cytnx_uint64> &shape,
                                  const std::vector<cytnx_uint64> &invmapper_L,
                                  const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_u64tcd(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_u64tcd(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_u64tcd(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_u64tcd(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_u64tcd(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
    }
    void Arithmic_internal_u64tcf(boost::intrusive_ptr<Storage_base> &out,
                                  boost::intrusive_ptr<Storage_base> &Lin,
                                  boost::intrusive_ptr<Storage_base> &Rin,
                                  const unsigned long long &len,
                                  const std::vector<cytnx_uint64> &shape,
                                  const std::vector<cytnx_uint64> &invmapper_L,
                                  const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_u64tcf(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_u64tcf(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_u64tcf(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_u64tcf(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_u64tcf(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
    }
    void Arithmic_internal_u64td(boost::intrusive_ptr<Storage_base> &out,
                                 boost::intrusive_ptr<Storage_base> &Lin,
                                 boost::intrusive_ptr<Storage_base> &Rin,
                                 const unsigned long long &len,
                                 const std::vector<cytnx_uint64> &shape,
                                 const std::vector<cytnx_uint64> &invmapper_L,
                                 const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_u64td(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_u64td(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_u64td(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_u64td(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_u64td(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
    }
    void Arithmic_internal_u64tf(boost::intrusive_ptr<Storage_base> &out,
                                 boost::intrusive_ptr<Storage_base> &Lin,
                                 boost::intrusive_ptr<Storage_base> &Rin,
                                 const unsigned long long &len,
                                 const std::vector<cytnx_uint64> &shape,
                                 const std::vector<cytnx_uint64> &invmapper_L,
                                 const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_u64tf(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_u64tf(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_u64tf(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_u64tf(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_u64tf(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
    }
    void Arithmic_internal_u64tu64(boost::intrusive_ptr<Storage_base> &out,
                                   boost::intrusive_ptr<Storage_base> &Lin,
                                   boost::intrusive_ptr<Storage_base> &Rin,
                                   const unsigned long long &len,
                                   const std::vector<cytnx_uint64> &shape,
                                   const std::vector<cytnx_uint64> &invmapper_L,
                                   const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_u64tu64(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_u64tu64(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_u64tu64(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_u64tu64(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_u64tu64(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
    }
    void Arithmic_internal_u64ti64(boost::intrusive_ptr<Storage_base> &out,
                                   boost::intrusive_ptr<Storage_base> &Lin,
                                   boost::intrusive_ptr<Storage_base> &Rin,
                                   const unsigned long long &len,
                                   const std::vector<cytnx_uint64> &shape,
                                   const std::vector<cytnx_uint64> &invmapper_L,
                                   const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_u64ti64(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_u64ti64(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_u64ti64(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_u64ti64(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_u64ti64(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
    }
    void Arithmic_internal_u64tu32(boost::intrusive_ptr<Storage_base> &out,
                                   boost::intrusive_ptr<Storage_base> &Lin,
                                   boost::intrusive_ptr<Storage_base> &Rin,
                                   const unsigned long long &len,
                                   const std::vector<cytnx_uint64> &shape,
                                   const std::vector<cytnx_uint64> &invmapper_L,
                                   const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_u64tu32(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_u64tu32(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_u64tu32(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_u64tu32(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_u64tu32(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
    }
    void Arithmic_internal_u64ti32(boost::intrusive_ptr<Storage_base> &out,
                                   boost::intrusive_ptr<Storage_base> &Lin,
                                   boost::intrusive_ptr<Storage_base> &Rin,
                                   const unsigned long long &len,
                                   const std::vector<cytnx_uint64> &shape,
                                   const std::vector<cytnx_uint64> &invmapper_L,
                                   const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_u64ti32(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_u64ti32(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_u64ti32(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_u64ti32(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_u64ti32(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
    }
    void Arithmic_internal_u64ti16(boost::intrusive_ptr<Storage_base> &out,
                                   boost::intrusive_ptr<Storage_base> &Lin,
                                   boost::intrusive_ptr<Storage_base> &Rin,
                                   const unsigned long long &len,
                                   const std::vector<cytnx_uint64> &shape,
                                   const std::vector<cytnx_uint64> &invmapper_L,
                                   const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_u64ti16(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_u64ti16(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_u64ti16(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_u64ti16(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_u64ti16(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
    }
    void Arithmic_internal_u64tu16(boost::intrusive_ptr<Storage_base> &out,
                                   boost::intrusive_ptr<Storage_base> &Lin,
                                   boost::intrusive_ptr<Storage_base> &Rin,
                                   const unsigned long long &len,
                                   const std::vector<cytnx_uint64> &shape,
                                   const std::vector<cytnx_uint64> &invmapper_L,
                                   const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_u64tu16(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_u64tu16(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_u64tu16(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_u64tu16(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_u64tu16(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
    }
    void Arithmic_internal_u64tb(boost::intrusive_ptr<Storage_base> &out,
                                 boost::intrusive_ptr<Storage_base> &Lin,
                                 boost::intrusive_ptr<Storage_base> &Rin,
                                 const unsigned long long &len,
                                 const std::vector<cytnx_uint64> &shape,
                                 const std::vector<cytnx_uint64> &invmapper_L,
                                 const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_u64tb(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_u64tb(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_u64tb(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_u64tb(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_u64tb(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
    }
    //----------------------
    void Arithmic_internal_i64tcd(boost::intrusive_ptr<Storage_base> &out,
                                  boost::intrusive_ptr<Storage_base> &Lin,
                                  boost::intrusive_ptr<Storage_base> &Rin,
                                  const unsigned long long &len,
                                  const std::vector<cytnx_uint64> &shape,
                                  const std::vector<cytnx_uint64> &invmapper_L,
                                  const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_i64tcd(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_i64tcd(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_i64tcd(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_i64tcd(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_i64tcd(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
    }
    void Arithmic_internal_i64tcf(boost::intrusive_ptr<Storage_base> &out,
                                  boost::intrusive_ptr<Storage_base> &Lin,
                                  boost::intrusive_ptr<Storage_base> &Rin,
                                  const unsigned long long &len,
                                  const std::vector<cytnx_uint64> &shape,
                                  const std::vector<cytnx_uint64> &invmapper_L,
                                  const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_i64tcf(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_i64tcf(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_i64tcf(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_i64tcf(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_i64tcf(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
    }
    void Arithmic_internal_i64td(boost::intrusive_ptr<Storage_base> &out,
                                 boost::intrusive_ptr<Storage_base> &Lin,
                                 boost::intrusive_ptr<Storage_base> &Rin,
                                 const unsigned long long &len,
                                 const std::vector<cytnx_uint64> &shape,
                                 const std::vector<cytnx_uint64> &invmapper_L,
                                 const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_i64td(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_i64td(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_i64td(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_i64td(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_i64td(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
    }
    void Arithmic_internal_i64tf(boost::intrusive_ptr<Storage_base> &out,
                                 boost::intrusive_ptr<Storage_base> &Lin,
                                 boost::intrusive_ptr<Storage_base> &Rin,
                                 const unsigned long long &len,
                                 const std::vector<cytnx_uint64> &shape,
                                 const std::vector<cytnx_uint64> &invmapper_L,
                                 const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_i64tf(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_i64tf(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_i64tf(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_i64tf(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_i64tf(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
    }
    void Arithmic_internal_i64tu64(boost::intrusive_ptr<Storage_base> &out,
                                   boost::intrusive_ptr<Storage_base> &Lin,
                                   boost::intrusive_ptr<Storage_base> &Rin,
                                   const unsigned long long &len,
                                   const std::vector<cytnx_uint64> &shape,
                                   const std::vector<cytnx_uint64> &invmapper_L,
                                   const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_i64tu64(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_i64tu64(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_i64tu64(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_i64tu64(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_i64tu64(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
    }
    void Arithmic_internal_i64ti64(boost::intrusive_ptr<Storage_base> &out,
                                   boost::intrusive_ptr<Storage_base> &Lin,
                                   boost::intrusive_ptr<Storage_base> &Rin,
                                   const unsigned long long &len,
                                   const std::vector<cytnx_uint64> &shape,
                                   const std::vector<cytnx_uint64> &invmapper_L,
                                   const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_i64ti64(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_i64ti64(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_i64ti64(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_i64ti64(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_i64ti64(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
    }
    void Arithmic_internal_i64tu32(boost::intrusive_ptr<Storage_base> &out,
                                   boost::intrusive_ptr<Storage_base> &Lin,
                                   boost::intrusive_ptr<Storage_base> &Rin,
                                   const unsigned long long &len,
                                   const std::vector<cytnx_uint64> &shape,
                                   const std::vector<cytnx_uint64> &invmapper_L,
                                   const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_i64tu32(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_i64tu32(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_i64tu32(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_i64tu32(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_i64tu32(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
    }
    void Arithmic_internal_i64ti32(boost::intrusive_ptr<Storage_base> &out,
                                   boost::intrusive_ptr<Storage_base> &Lin,
                                   boost::intrusive_ptr<Storage_base> &Rin,
                                   const unsigned long long &len,
                                   const std::vector<cytnx_uint64> &shape,
                                   const std::vector<cytnx_uint64> &invmapper_L,
                                   const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_i64ti32(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_i64ti32(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_i64ti32(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_i64ti32(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_i64ti32(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
    }
    void Arithmic_internal_i64ti16(boost::intrusive_ptr<Storage_base> &out,
                                   boost::intrusive_ptr<Storage_base> &Lin,
                                   boost::intrusive_ptr<Storage_base> &Rin,
                                   const unsigned long long &len,
                                   const std::vector<cytnx_uint64> &shape,
                                   const std::vector<cytnx_uint64> &invmapper_L,
                                   const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_i64ti16(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_i64ti16(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_i64ti16(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_i64ti16(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
    }
    void Arithmic_internal_i64tu16(boost::intrusive_ptr<Storage_base> &out,
                                   boost::intrusive_ptr<Storage_base> &Lin,
                                   boost::intrusive_ptr<Storage_base> &Rin,
                                   const unsigned long long &len,
                                   const std::vector<cytnx_uint64> &shape,
                                   const std::vector<cytnx_uint64> &invmapper_L,
                                   const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_i64tu16(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_i64tu16(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_i64tu16(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_i64tu16(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_i64tu16(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
    }
    void Arithmic_internal_i64tb(boost::intrusive_ptr<Storage_base> &out,
                                 boost::intrusive_ptr<Storage_base> &Lin,
                                 boost::intrusive_ptr<Storage_base> &Rin,
                                 const unsigned long long &len,
                                 const std::vector<cytnx_uint64> &shape,
                                 const std::vector<cytnx_uint64> &invmapper_L,
                                 const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_i64tb(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_i64tb(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_i64tb(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_i64tb(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_i64tb(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
    }

    //-------------------
    void Arithmic_internal_u32tcd(boost::intrusive_ptr<Storage_base> &out,
                                  boost::intrusive_ptr<Storage_base> &Lin,
                                  boost::intrusive_ptr<Storage_base> &Rin,
                                  const unsigned long long &len,
                                  const std::vector<cytnx_uint64> &shape,
                                  const std::vector<cytnx_uint64> &invmapper_L,
                                  const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_u32tcd(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_u32tcd(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_u32tcd(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_u32tcd(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_u32tcd(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
    }
    void Arithmic_internal_u32tcf(boost::intrusive_ptr<Storage_base> &out,
                                  boost::intrusive_ptr<Storage_base> &Lin,
                                  boost::intrusive_ptr<Storage_base> &Rin,
                                  const unsigned long long &len,
                                  const std::vector<cytnx_uint64> &shape,
                                  const std::vector<cytnx_uint64> &invmapper_L,
                                  const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_u32tcf(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_u32tcf(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_u32tcf(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_u32tcf(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_u32tcf(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
    }
    void Arithmic_internal_u32td(boost::intrusive_ptr<Storage_base> &out,
                                 boost::intrusive_ptr<Storage_base> &Lin,
                                 boost::intrusive_ptr<Storage_base> &Rin,
                                 const unsigned long long &len,
                                 const std::vector<cytnx_uint64> &shape,
                                 const std::vector<cytnx_uint64> &invmapper_L,
                                 const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_u32td(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_u32td(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_u32td(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_u32td(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_u32td(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
    }
    void Arithmic_internal_u32tf(boost::intrusive_ptr<Storage_base> &out,
                                 boost::intrusive_ptr<Storage_base> &Lin,
                                 boost::intrusive_ptr<Storage_base> &Rin,
                                 const unsigned long long &len,
                                 const std::vector<cytnx_uint64> &shape,
                                 const std::vector<cytnx_uint64> &invmapper_L,
                                 const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_u32tf(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_u32tf(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_u32tf(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_u32tf(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_u32tf(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
    }
    void Arithmic_internal_u32tu64(boost::intrusive_ptr<Storage_base> &out,
                                   boost::intrusive_ptr<Storage_base> &Lin,
                                   boost::intrusive_ptr<Storage_base> &Rin,
                                   const unsigned long long &len,
                                   const std::vector<cytnx_uint64> &shape,
                                   const std::vector<cytnx_uint64> &invmapper_L,
                                   const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_u32tu64(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_u32tu64(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_u32tu64(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_u32tu64(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_u32tu64(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
    }
    void Arithmic_internal_u32ti64(boost::intrusive_ptr<Storage_base> &out,
                                   boost::intrusive_ptr<Storage_base> &Lin,
                                   boost::intrusive_ptr<Storage_base> &Rin,
                                   const unsigned long long &len,
                                   const std::vector<cytnx_uint64> &shape,
                                   const std::vector<cytnx_uint64> &invmapper_L,
                                   const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_u32ti64(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_u32ti64(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_u32ti64(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_u32ti64(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_u32ti64(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
    }
    void Arithmic_internal_u32tu32(boost::intrusive_ptr<Storage_base> &out,
                                   boost::intrusive_ptr<Storage_base> &Lin,
                                   boost::intrusive_ptr<Storage_base> &Rin,
                                   const unsigned long long &len,
                                   const std::vector<cytnx_uint64> &shape,
                                   const std::vector<cytnx_uint64> &invmapper_L,
                                   const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_u32tu32(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_u32tu32(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_u32tu32(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_u32tu32(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_u32tu32(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
    }
    void Arithmic_internal_u32ti32(boost::intrusive_ptr<Storage_base> &out,
                                   boost::intrusive_ptr<Storage_base> &Lin,
                                   boost::intrusive_ptr<Storage_base> &Rin,
                                   const unsigned long long &len,
                                   const std::vector<cytnx_uint64> &shape,
                                   const std::vector<cytnx_uint64> &invmapper_L,
                                   const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_u32ti32(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_u32ti32(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_u32ti32(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_u32ti32(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_u32ti32(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
    }
    void Arithmic_internal_u32ti16(boost::intrusive_ptr<Storage_base> &out,
                                   boost::intrusive_ptr<Storage_base> &Lin,
                                   boost::intrusive_ptr<Storage_base> &Rin,
                                   const unsigned long long &len,
                                   const std::vector<cytnx_uint64> &shape,
                                   const std::vector<cytnx_uint64> &invmapper_L,
                                   const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_u32ti16(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_u32ti16(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_u32ti16(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_u32ti16(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_u32ti16(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
    }
    void Arithmic_internal_u32tu16(boost::intrusive_ptr<Storage_base> &out,
                                   boost::intrusive_ptr<Storage_base> &Lin,
                                   boost::intrusive_ptr<Storage_base> &Rin,
                                   const unsigned long long &len,
                                   const std::vector<cytnx_uint64> &shape,
                                   const std::vector<cytnx_uint64> &invmapper_L,
                                   const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_u32tu16(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_u32tu16(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_u32tu16(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_u32tu16(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_u32tu16(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
    }
    void Arithmic_internal_u32tb(boost::intrusive_ptr<Storage_base> &out,
                                 boost::intrusive_ptr<Storage_base> &Lin,
                                 boost::intrusive_ptr<Storage_base> &Rin,
                                 const unsigned long long &len,
                                 const std::vector<cytnx_uint64> &shape,
                                 const std::vector<cytnx_uint64> &invmapper_L,
                                 const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_u32tb(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_u32tb(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_u32tb(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_u32tb(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_u32tb(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
    }

    //----------------------
    void Arithmic_internal_i32tcd(boost::intrusive_ptr<Storage_base> &out,
                                  boost::intrusive_ptr<Storage_base> &Lin,
                                  boost::intrusive_ptr<Storage_base> &Rin,
                                  const unsigned long long &len,
                                  const std::vector<cytnx_uint64> &shape,
                                  const std::vector<cytnx_uint64> &invmapper_L,
                                  const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_i32tcd(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_i32tcd(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_i32tcd(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_i32tcd(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_i32tcd(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
    }
    void Arithmic_internal_i32tcf(boost::intrusive_ptr<Storage_base> &out,
                                  boost::intrusive_ptr<Storage_base> &Lin,
                                  boost::intrusive_ptr<Storage_base> &Rin,
                                  const unsigned long long &len,
                                  const std::vector<cytnx_uint64> &shape,
                                  const std::vector<cytnx_uint64> &invmapper_L,
                                  const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_i32tcf(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_i32tcf(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_i32tcf(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_i32tcf(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_i32tcf(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
    }
    void Arithmic_internal_i32td(boost::intrusive_ptr<Storage_base> &out,
                                 boost::intrusive_ptr<Storage_base> &Lin,
                                 boost::intrusive_ptr<Storage_base> &Rin,
                                 const unsigned long long &len,
                                 const std::vector<cytnx_uint64> &shape,
                                 const std::vector<cytnx_uint64> &invmapper_L,
                                 const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_i32td(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_i32td(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_i32td(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_i32td(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_i32td(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
    }
    void Arithmic_internal_i32tf(boost::intrusive_ptr<Storage_base> &out,
                                 boost::intrusive_ptr<Storage_base> &Lin,
                                 boost::intrusive_ptr<Storage_base> &Rin,
                                 const unsigned long long &len,
                                 const std::vector<cytnx_uint64> &shape,
                                 const std::vector<cytnx_uint64> &invmapper_L,
                                 const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_i32tf(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_i32tf(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_i32tf(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_i32tf(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_i32tf(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
    }
    void Arithmic_internal_i32tu64(boost::intrusive_ptr<Storage_base> &out,
                                   boost::intrusive_ptr<Storage_base> &Lin,
                                   boost::intrusive_ptr<Storage_base> &Rin,
                                   const unsigned long long &len,
                                   const std::vector<cytnx_uint64> &shape,
                                   const std::vector<cytnx_uint64> &invmapper_L,
                                   const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_i32tu64(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_i32tu64(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_i32tu64(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_i32tu64(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_i32tu64(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
    }
    void Arithmic_internal_i32ti64(boost::intrusive_ptr<Storage_base> &out,
                                   boost::intrusive_ptr<Storage_base> &Lin,
                                   boost::intrusive_ptr<Storage_base> &Rin,
                                   const unsigned long long &len,
                                   const std::vector<cytnx_uint64> &shape,
                                   const std::vector<cytnx_uint64> &invmapper_L,
                                   const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_i32ti64(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_i32ti64(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_i32ti64(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_i32ti64(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_i32ti64(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
    }
    void Arithmic_internal_i32tu32(boost::intrusive_ptr<Storage_base> &out,
                                   boost::intrusive_ptr<Storage_base> &Lin,
                                   boost::intrusive_ptr<Storage_base> &Rin,
                                   const unsigned long long &len,
                                   const std::vector<cytnx_uint64> &shape,
                                   const std::vector<cytnx_uint64> &invmapper_L,
                                   const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_i32tu32(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_i32tu32(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_i32tu32(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_i32tu32(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_i32tu32(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
    }
    void Arithmic_internal_i32ti32(boost::intrusive_ptr<Storage_base> &out,
                                   boost::intrusive_ptr<Storage_base> &Lin,
                                   boost::intrusive_ptr<Storage_base> &Rin,
                                   const unsigned long long &len,
                                   const std::vector<cytnx_uint64> &shape,
                                   const std::vector<cytnx_uint64> &invmapper_L,
                                   const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_i32ti32(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_i32ti32(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_i32ti32(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_i32ti32(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_i32ti32(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
    }
    void Arithmic_internal_i32ti16(boost::intrusive_ptr<Storage_base> &out,
                                   boost::intrusive_ptr<Storage_base> &Lin,
                                   boost::intrusive_ptr<Storage_base> &Rin,
                                   const unsigned long long &len,
                                   const std::vector<cytnx_uint64> &shape,
                                   const std::vector<cytnx_uint64> &invmapper_L,
                                   const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_i32ti16(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_i32ti16(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_i32ti16(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_i32ti16(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_i32ti16(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
    }
    void Arithmic_internal_i32tu16(boost::intrusive_ptr<Storage_base> &out,
                                   boost::intrusive_ptr<Storage_base> &Lin,
                                   boost::intrusive_ptr<Storage_base> &Rin,
                                   const unsigned long long &len,
                                   const std::vector<cytnx_uint64> &shape,
                                   const std::vector<cytnx_uint64> &invmapper_L,
                                   const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_i32tu16(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_i32tu16(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_i32tu16(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_i32tu16(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_i32tu16(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
    }
    void Arithmic_internal_i32tb(boost::intrusive_ptr<Storage_base> &out,
                                 boost::intrusive_ptr<Storage_base> &Lin,
                                 boost::intrusive_ptr<Storage_base> &Rin,
                                 const unsigned long long &len,
                                 const std::vector<cytnx_uint64> &shape,
                                 const std::vector<cytnx_uint64> &invmapper_L,
                                 const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_i32tb(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_i32tb(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_i32tb(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_i32tb(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_i32tb(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
    }
    //----------------------
    void Arithmic_internal_i16tcd(boost::intrusive_ptr<Storage_base> &out,
                                  boost::intrusive_ptr<Storage_base> &Lin,
                                  boost::intrusive_ptr<Storage_base> &Rin,
                                  const unsigned long long &len,
                                  const std::vector<cytnx_uint64> &shape,
                                  const std::vector<cytnx_uint64> &invmapper_L,
                                  const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_i16tcd(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_i16tcd(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_i16tcd(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_i16tcd(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_i16tcd(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
    }
    void Arithmic_internal_i16tcf(boost::intrusive_ptr<Storage_base> &out,
                                  boost::intrusive_ptr<Storage_base> &Lin,
                                  boost::intrusive_ptr<Storage_base> &Rin,
                                  const unsigned long long &len,
                                  const std::vector<cytnx_uint64> &shape,
                                  const std::vector<cytnx_uint64> &invmapper_L,
                                  const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_i16tcf(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_i16tcf(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_i16tcf(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_i16tcf(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_i16tcf(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
    }
    void Arithmic_internal_i16td(boost::intrusive_ptr<Storage_base> &out,
                                 boost::intrusive_ptr<Storage_base> &Lin,
                                 boost::intrusive_ptr<Storage_base> &Rin,
                                 const unsigned long long &len,
                                 const std::vector<cytnx_uint64> &shape,
                                 const std::vector<cytnx_uint64> &invmapper_L,
                                 const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_i16td(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_i16td(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_i16td(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_i16td(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_i16td(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
    }
    void Arithmic_internal_i16tf(boost::intrusive_ptr<Storage_base> &out,
                                 boost::intrusive_ptr<Storage_base> &Lin,
                                 boost::intrusive_ptr<Storage_base> &Rin,
                                 const unsigned long long &len,
                                 const std::vector<cytnx_uint64> &shape,
                                 const std::vector<cytnx_uint64> &invmapper_L,
                                 const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_i16tf(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_i16tf(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_i16tf(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_i16tf(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_i16tf(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
    }
    void Arithmic_internal_i16tu64(boost::intrusive_ptr<Storage_base> &out,
                                   boost::intrusive_ptr<Storage_base> &Lin,
                                   boost::intrusive_ptr<Storage_base> &Rin,
                                   const unsigned long long &len,
                                   const std::vector<cytnx_uint64> &shape,
                                   const std::vector<cytnx_uint64> &invmapper_L,
                                   const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_i16tu64(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_i16tu64(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_i16tu64(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_i16tu64(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_i16tu64(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
    }
    void Arithmic_internal_i16ti64(boost::intrusive_ptr<Storage_base> &out,
                                   boost::intrusive_ptr<Storage_base> &Lin,
                                   boost::intrusive_ptr<Storage_base> &Rin,
                                   const unsigned long long &len,
                                   const std::vector<cytnx_uint64> &shape,
                                   const std::vector<cytnx_uint64> &invmapper_L,
                                   const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_i16ti64(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_i16ti64(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_i16ti64(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_i16ti64(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_i16ti64(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
    }
    void Arithmic_internal_i16tu32(boost::intrusive_ptr<Storage_base> &out,
                                   boost::intrusive_ptr<Storage_base> &Lin,
                                   boost::intrusive_ptr<Storage_base> &Rin,
                                   const unsigned long long &len,
                                   const std::vector<cytnx_uint64> &shape,
                                   const std::vector<cytnx_uint64> &invmapper_L,
                                   const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_i16tu32(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_i16tu32(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_i16tu32(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_i16tu32(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_i16tu32(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
    }
    void Arithmic_internal_i16ti32(boost::intrusive_ptr<Storage_base> &out,
                                   boost::intrusive_ptr<Storage_base> &Lin,
                                   boost::intrusive_ptr<Storage_base> &Rin,
                                   const unsigned long long &len,
                                   const std::vector<cytnx_uint64> &shape,
                                   const std::vector<cytnx_uint64> &invmapper_L,
                                   const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_i16ti32(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_i16ti32(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_i16ti32(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_i16ti32(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_i16ti32(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
    }
    void Arithmic_internal_i16ti16(boost::intrusive_ptr<Storage_base> &out,
                                   boost::intrusive_ptr<Storage_base> &Lin,
                                   boost::intrusive_ptr<Storage_base> &Rin,
                                   const unsigned long long &len,
                                   const std::vector<cytnx_uint64> &shape,
                                   const std::vector<cytnx_uint64> &invmapper_L,
                                   const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_i16ti16(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_i16ti16(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_i16ti16(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_i16ti16(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_i16ti16(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
    }
    void Arithmic_internal_i16tu16(boost::intrusive_ptr<Storage_base> &out,
                                   boost::intrusive_ptr<Storage_base> &Lin,
                                   boost::intrusive_ptr<Storage_base> &Rin,
                                   const unsigned long long &len,
                                   const std::vector<cytnx_uint64> &shape,
                                   const std::vector<cytnx_uint64> &invmapper_L,
                                   const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_i16tu16(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_i16tu16(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_i16tu16(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_i16tu16(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_i16tu16(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
    }
    void Arithmic_internal_i16tb(boost::intrusive_ptr<Storage_base> &out,
                                 boost::intrusive_ptr<Storage_base> &Lin,
                                 boost::intrusive_ptr<Storage_base> &Rin,
                                 const unsigned long long &len,
                                 const std::vector<cytnx_uint64> &shape,
                                 const std::vector<cytnx_uint64> &invmapper_L,
                                 const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_i16tb(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_i16tb(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_i16tb(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_i16tb(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_i16tb(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
    }

    //----------------------
    void Arithmic_internal_u16tcd(boost::intrusive_ptr<Storage_base> &out,
                                  boost::intrusive_ptr<Storage_base> &Lin,
                                  boost::intrusive_ptr<Storage_base> &Rin,
                                  const unsigned long long &len,
                                  const std::vector<cytnx_uint64> &shape,
                                  const std::vector<cytnx_uint64> &invmapper_L,
                                  const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_u16tcd(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_u16tcd(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_u16tcd(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_u16tcd(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_u16tcd(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
    }
    void Arithmic_internal_u16tcf(boost::intrusive_ptr<Storage_base> &out,
                                  boost::intrusive_ptr<Storage_base> &Lin,
                                  boost::intrusive_ptr<Storage_base> &Rin,
                                  const unsigned long long &len,
                                  const std::vector<cytnx_uint64> &shape,
                                  const std::vector<cytnx_uint64> &invmapper_L,
                                  const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_u16tcf(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_u16tcf(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_u16tcf(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_u16tcf(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_u16tcf(out, Lin, Rin, len, shape, invmapper_L,
                                                    invmapper_R);
    }
    void Arithmic_internal_u16td(boost::intrusive_ptr<Storage_base> &out,
                                 boost::intrusive_ptr<Storage_base> &Lin,
                                 boost::intrusive_ptr<Storage_base> &Rin,
                                 const unsigned long long &len,
                                 const std::vector<cytnx_uint64> &shape,
                                 const std::vector<cytnx_uint64> &invmapper_L,
                                 const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_u16td(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_u16td(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_u16td(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_u16td(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_u16td(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
    }
    void Arithmic_internal_u16tf(boost::intrusive_ptr<Storage_base> &out,
                                 boost::intrusive_ptr<Storage_base> &Lin,
                                 boost::intrusive_ptr<Storage_base> &Rin,
                                 const unsigned long long &len,
                                 const std::vector<cytnx_uint64> &shape,
                                 const std::vector<cytnx_uint64> &invmapper_L,
                                 const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_u16tf(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_u16tf(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_u16tf(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_u16tf(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_u16tf(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
    }
    void Arithmic_internal_u16tu64(boost::intrusive_ptr<Storage_base> &out,
                                   boost::intrusive_ptr<Storage_base> &Lin,
                                   boost::intrusive_ptr<Storage_base> &Rin,
                                   const unsigned long long &len,
                                   const std::vector<cytnx_uint64> &shape,
                                   const std::vector<cytnx_uint64> &invmapper_L,
                                   const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_u16tu64(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_u16tu64(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_u16tu64(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_u16tu64(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_u16tu64(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
    }
    void Arithmic_internal_u16ti64(boost::intrusive_ptr<Storage_base> &out,
                                   boost::intrusive_ptr<Storage_base> &Lin,
                                   boost::intrusive_ptr<Storage_base> &Rin,
                                   const unsigned long long &len,
                                   const std::vector<cytnx_uint64> &shape,
                                   const std::vector<cytnx_uint64> &invmapper_L,
                                   const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_u16ti64(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_u16ti64(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_u16ti64(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_u16ti64(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_u16ti64(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
    }
    void Arithmic_internal_u16tu32(boost::intrusive_ptr<Storage_base> &out,
                                   boost::intrusive_ptr<Storage_base> &Lin,
                                   boost::intrusive_ptr<Storage_base> &Rin,
                                   const unsigned long long &len,
                                   const std::vector<cytnx_uint64> &shape,
                                   const std::vector<cytnx_uint64> &invmapper_L,
                                   const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_u16tu32(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_u16tu32(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_u16tu32(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_u16tu32(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_u16tu32(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
    }
    void Arithmic_internal_u16ti32(boost::intrusive_ptr<Storage_base> &out,
                                   boost::intrusive_ptr<Storage_base> &Lin,
                                   boost::intrusive_ptr<Storage_base> &Rin,
                                   const unsigned long long &len,
                                   const std::vector<cytnx_uint64> &shape,
                                   const std::vector<cytnx_uint64> &invmapper_L,
                                   const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_u16ti32(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_u16ti32(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_u16ti32(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_u16ti32(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_u16ti32(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
    }
    void Arithmic_internal_u16ti16(boost::intrusive_ptr<Storage_base> &out,
                                   boost::intrusive_ptr<Storage_base> &Lin,
                                   boost::intrusive_ptr<Storage_base> &Rin,
                                   const unsigned long long &len,
                                   const std::vector<cytnx_uint64> &shape,
                                   const std::vector<cytnx_uint64> &invmapper_L,
                                   const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_u16ti16(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_u16ti16(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_u16ti16(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_u16ti16(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_u16ti16(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
    }
    void Arithmic_internal_u16tu16(boost::intrusive_ptr<Storage_base> &out,
                                   boost::intrusive_ptr<Storage_base> &Lin,
                                   boost::intrusive_ptr<Storage_base> &Rin,
                                   const unsigned long long &len,
                                   const std::vector<cytnx_uint64> &shape,
                                   const std::vector<cytnx_uint64> &invmapper_L,
                                   const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_u16tu16(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_u16tu16(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_u16tu16(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_u16tu16(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_u16tu16(out, Lin, Rin, len, shape, invmapper_L,
                                                     invmapper_R);
    }
    void Arithmic_internal_u16tb(boost::intrusive_ptr<Storage_base> &out,
                                 boost::intrusive_ptr<Storage_base> &Lin,
                                 boost::intrusive_ptr<Storage_base> &Rin,
                                 const unsigned long long &len,
                                 const std::vector<cytnx_uint64> &shape,
                                 const std::vector<cytnx_uint64> &invmapper_L,
                                 const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_u16tb(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_u16tb(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_u16tb(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_u16tb(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_u16tb(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
    }
    //----------------------
    void Arithmic_internal_btcd(boost::intrusive_ptr<Storage_base> &out,
                                boost::intrusive_ptr<Storage_base> &Lin,
                                boost::intrusive_ptr<Storage_base> &Rin,
                                const unsigned long long &len,
                                const std::vector<cytnx_uint64> &shape,
                                const std::vector<cytnx_uint64> &invmapper_L,
                                const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_btcd(out, Lin, Rin, len, shape, invmapper_L,
                                                  invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_btcd(out, Lin, Rin, len, shape, invmapper_L,
                                                  invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_btcd(out, Lin, Rin, len, shape, invmapper_L,
                                                  invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_btcd(out, Lin, Rin, len, shape, invmapper_L,
                                                  invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_btcd(out, Lin, Rin, len, shape, invmapper_L,
                                                  invmapper_R);
    }
    void Arithmic_internal_btcf(boost::intrusive_ptr<Storage_base> &out,
                                boost::intrusive_ptr<Storage_base> &Lin,
                                boost::intrusive_ptr<Storage_base> &Rin,
                                const unsigned long long &len,
                                const std::vector<cytnx_uint64> &shape,
                                const std::vector<cytnx_uint64> &invmapper_L,
                                const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_btcf(out, Lin, Rin, len, shape, invmapper_L,
                                                  invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_btcf(out, Lin, Rin, len, shape, invmapper_L,
                                                  invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_btcf(out, Lin, Rin, len, shape, invmapper_L,
                                                  invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_btcf(out, Lin, Rin, len, shape, invmapper_L,
                                                  invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_btcf(out, Lin, Rin, len, shape, invmapper_L,
                                                  invmapper_R);
    }
    void Arithmic_internal_btd(boost::intrusive_ptr<Storage_base> &out,
                               boost::intrusive_ptr<Storage_base> &Lin,
                               boost::intrusive_ptr<Storage_base> &Rin,
                               const unsigned long long &len,
                               const std::vector<cytnx_uint64> &shape,
                               const std::vector<cytnx_uint64> &invmapper_L,
                               const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_btd(out, Lin, Rin, len, shape, invmapper_L,
                                                 invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_btd(out, Lin, Rin, len, shape, invmapper_L,
                                                 invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_btd(out, Lin, Rin, len, shape, invmapper_L,
                                                 invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_btd(out, Lin, Rin, len, shape, invmapper_L,
                                                 invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_btd(out, Lin, Rin, len, shape, invmapper_L,
                                                 invmapper_R);
    }
    void Arithmic_internal_btf(boost::intrusive_ptr<Storage_base> &out,
                               boost::intrusive_ptr<Storage_base> &Lin,
                               boost::intrusive_ptr<Storage_base> &Rin,
                               const unsigned long long &len,
                               const std::vector<cytnx_uint64> &shape,
                               const std::vector<cytnx_uint64> &invmapper_L,
                               const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_btf(out, Lin, Rin, len, shape, invmapper_L,
                                                 invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_btf(out, Lin, Rin, len, shape, invmapper_L,
                                                 invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_btf(out, Lin, Rin, len, shape, invmapper_L,
                                                 invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_btf(out, Lin, Rin, len, shape, invmapper_L,
                                                 invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_btf(out, Lin, Rin, len, shape, invmapper_L,
                                                 invmapper_R);
    }
    void Arithmic_internal_btu64(boost::intrusive_ptr<Storage_base> &out,
                                 boost::intrusive_ptr<Storage_base> &Lin,
                                 boost::intrusive_ptr<Storage_base> &Rin,
                                 const unsigned long long &len,
                                 const std::vector<cytnx_uint64> &shape,
                                 const std::vector<cytnx_uint64> &invmapper_L,
                                 const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_btu64(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_btu64(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_btu64(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_btu64(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_btu64(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
    }
    void Arithmic_internal_bti64(boost::intrusive_ptr<Storage_base> &out,
                                 boost::intrusive_ptr<Storage_base> &Lin,
                                 boost::intrusive_ptr<Storage_base> &Rin,
                                 const unsigned long long &len,
                                 const std::vector<cytnx_uint64> &shape,
                                 const std::vector<cytnx_uint64> &invmapper_L,
                                 const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_bti64(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_bti64(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_bti64(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_bti64(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_bti64(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
    }
    void Arithmic_internal_btu32(boost::intrusive_ptr<Storage_base> &out,
                                 boost::intrusive_ptr<Storage_base> &Lin,
                                 boost::intrusive_ptr<Storage_base> &Rin,
                                 const unsigned long long &len,
                                 const std::vector<cytnx_uint64> &shape,
                                 const std::vector<cytnx_uint64> &invmapper_L,
                                 const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_btu32(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_btu32(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_btu32(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_btu32(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_btu32(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
    }
    void Arithmic_internal_bti32(boost::intrusive_ptr<Storage_base> &out,
                                 boost::intrusive_ptr<Storage_base> &Lin,
                                 boost::intrusive_ptr<Storage_base> &Rin,
                                 const unsigned long long &len,
                                 const std::vector<cytnx_uint64> &shape,
                                 const std::vector<cytnx_uint64> &invmapper_L,
                                 const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_bti32(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_bti32(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_bti32(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_bti32(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_bti32(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
    }
    void Arithmic_internal_bti16(boost::intrusive_ptr<Storage_base> &out,
                                 boost::intrusive_ptr<Storage_base> &Lin,
                                 boost::intrusive_ptr<Storage_base> &Rin,
                                 const unsigned long long &len,
                                 const std::vector<cytnx_uint64> &shape,
                                 const std::vector<cytnx_uint64> &invmapper_L,
                                 const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_bti16(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_bti16(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_bti16(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_bti16(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_bti16(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
    }
    void Arithmic_internal_btu16(boost::intrusive_ptr<Storage_base> &out,
                                 boost::intrusive_ptr<Storage_base> &Lin,
                                 boost::intrusive_ptr<Storage_base> &Rin,
                                 const unsigned long long &len,
                                 const std::vector<cytnx_uint64> &shape,
                                 const std::vector<cytnx_uint64> &invmapper_L,
                                 const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_btu16(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_btu16(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_btu16(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_btu16(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_btu16(out, Lin, Rin, len, shape, invmapper_L,
                                                   invmapper_R);
    }
    void Arithmic_internal_btb(boost::intrusive_ptr<Storage_base> &out,
                               boost::intrusive_ptr<Storage_base> &Lin,
                               boost::intrusive_ptr<Storage_base> &Rin,
                               const unsigned long long &len,
                               const std::vector<cytnx_uint64> &shape,
                               const std::vector<cytnx_uint64> &invmapper_L,
                               const std::vector<cytnx_uint64> &invmapper_R, const char &type) {
      if (type == 0)
        cytnx::linalg_internal::Add_internal_btb(out, Lin, Rin, len, shape, invmapper_L,
                                                 invmapper_R);
      else if (type == 1)
        cytnx::linalg_internal::Mul_internal_btb(out, Lin, Rin, len, shape, invmapper_L,
                                                 invmapper_R);
      else if (type == 2)
        cytnx::linalg_internal::Sub_internal_btb(out, Lin, Rin, len, shape, invmapper_L,
                                                 invmapper_R);
      else if (type == 3)
        cytnx::linalg_internal::Div_internal_btb(out, Lin, Rin, len, shape, invmapper_L,
                                                 invmapper_R);
      else
        cytnx::linalg_internal::Cpr_internal_btb(out, Lin, Rin, len, shape, invmapper_L,
                                                 invmapper_R);
    }

  }  // namespace linalg_internal
}  // namespace cytnx
