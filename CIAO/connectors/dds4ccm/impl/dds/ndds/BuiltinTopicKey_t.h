                                      /**
 * @author Marcel Smit <msmit@dre.vanderbilt.edu>
 *
 * $Id$
 *
 */

#ifndef BUILTINTOPICKEY_T_H
#define BUILTINTOPICKEY_T_H

#include "dds4ccm/impl/dds4ccm_conf.h"

#if (CIAO_DDS4CCM_NDDS==1)
inline void
operator<<= (::DDS::BuiltinTopicKey_t &ddsbuiltintopickey, const ::DDS_BuiltinTopicKey_t & builtintopickey)
{
  ACE_OS::memcpy (ddsbuiltintopickey.value, builtintopickey.value, sizeof (builtintopickey.value));
}

inline void
operator<<= (::DDS_BuiltinTopicKey_t &ddsbuiltintopickey, const ::DDS::BuiltinTopicKey_t & builtintopickey)
{
  ACE_OS::memcpy (ddsbuiltintopickey.value, builtintopickey.value, sizeof (builtintopickey.value));
}

#endif

#endif /* BUILTINTOPICKEY_T_H */
