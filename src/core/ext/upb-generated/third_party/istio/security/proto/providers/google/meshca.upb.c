/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     third_party/istio/security/proto/providers/google/meshca.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#include "upb/msg_internal.h"
#include "third_party/istio/security/proto/providers/google/meshca.upb.h"
#include "google/protobuf/duration.upb.h"

#include "upb/port_def.inc"

static const upb_msglayout *const google_security_meshca_v1_MeshCertificateRequest_submsgs[1] = {
  &google_protobuf_Duration_msginit,
};

static const upb_msglayout_field google_security_meshca_v1_MeshCertificateRequest__fields[3] = {
  {1, UPB_SIZE(4, 8), 0, 0, 9, _UPB_MODE_SCALAR},
  {2, UPB_SIZE(12, 24), 0, 0, 9, _UPB_MODE_SCALAR},
  {3, UPB_SIZE(20, 40), 1, 0, 11, _UPB_MODE_SCALAR},
};

const upb_msglayout google_security_meshca_v1_MeshCertificateRequest_msginit = {
  &google_security_meshca_v1_MeshCertificateRequest_submsgs[0],
  &google_security_meshca_v1_MeshCertificateRequest__fields[0],
  UPB_SIZE(24, 48), 3, false, 3, 255,
};

static const upb_msglayout_field google_security_meshca_v1_MeshCertificateResponse__fields[1] = {
  {1, UPB_SIZE(0, 0), 0, 0, 9, _UPB_MODE_ARRAY},
};

const upb_msglayout google_security_meshca_v1_MeshCertificateResponse_msginit = {
  NULL,
  &google_security_meshca_v1_MeshCertificateResponse__fields[0],
  UPB_SIZE(8, 8), 1, false, 1, 255,
};

#include "upb/port_undef.inc"
