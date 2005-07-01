/* -*- C++ -*- */


//=============================================================================
/**
 *  @file    ServerRequestInterceptor_Factory_Impl.h
 *
 *  $Id$
 *
 *  @author Johnny Willemsen  <jwillemsen@remedy.nl>
 */
//=============================================================================


#ifndef TAO_SERVERREQUESTINTERCEPTOR_ADAPTER_FACTORY_IMPL_H
#define TAO_SERVERREQUESTINTERCEPTOR_ADAPTER_FACTORY_IMPL_H

#include /**/ "ace/pre.h"

#include "pi_server_export.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include "ace/Service_Config.h"

#include "tao/ServerRequestInterceptor_Adapter_Factory.h"

namespace TAO
{
  class ServerRequestInterceptor_Adapter;
}

class TAO_PI_Server_Export TAO_ServerRequestInterceptor_Adapter_Factory_Impl
  : public TAO_ServerRequestInterceptor_Adapter_Factory
{
public:
  virtual TAO::ServerRequestInterceptor_Adapter *create (void);
};

ACE_STATIC_SVC_DECLARE (TAO_ServerRequestInterceptor_Adapter_Factory_Impl)
ACE_FACTORY_DECLARE (TAO_PI_Server, TAO_ServerRequestInterceptor_Adapter_Factory_Impl)

#include /**/ "ace/post.h"

#endif /* TAO_SERVERREQUESTINTERCEPTOR_ADAPTER_FACTORY_IMPL_H */
