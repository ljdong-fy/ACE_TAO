/* -*- C++ -*- */
// $Id$

// ******  Code generated by the The ACE ORB (TAO) IDL Compiler *******
// TAO and the TAO IDL Compiler have been developed by the Center for
// Distributed Object Computing at Washington University, St. Louis.
//
// Information about TAO is available at:
//                 http://www.cs.wustl.edu/~schmidt/TAO.html

#ifndef _TAO_IDL_IORS_H_
#define _TAO_IDL_IORS_H_

#include "tao/IORC.h"
#include "tao/Servant_Base.h"


#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#if defined(_MSC_VER)
#pragma warning(disable:4250)
#endif /* _MSC_VER */

TAO_NAMESPACE  POA_TAO_IOP
{
  class TAO_IOR_Manipulation;
  typedef TAO_IOR_Manipulation *TAO_IOR_Manipulation_ptr;
  class TAO_Export  TAO_IOR_Manipulation :  public virtual TAO_Local_ServantBase
  {
  protected:
    TAO_IOR_Manipulation (void);

  public:
    TAO_IOR_Manipulation (const TAO_IOR_Manipulation& rhs);
    virtual ~TAO_IOR_Manipulation (void);


    virtual CORBA::Boolean _is_a (
        const char* logical_type_id,
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      );

    virtual void* _downcast (
        const char* logical_type_id
      );

    TAO_IOP::TAO_IOR_Manipulation *_this (
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      );

    virtual const char* _interface_repository_id (void) const;

    virtual void* _create_collocated_objref(const char *repository_id,
                                            CORBA::ULong type,
                                            TAO_Stub *sobj);

        virtual CORBA::Object_ptr merge_iors (
        const TAO_IOP::TAO_IOR_Manipulation::IORList & iors,
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException,
        TAO_IOP::TAO_IOR_Manipulation::EmptyProfileList,
        TAO_IOP::TAO_IOR_Manipulation::Duplicate,
        TAO_IOP::TAO_IOR_Manipulation::Invalid_IOR
      )) = 0;

    virtual CORBA::Object_ptr add_profiles (
        CORBA::Object_ptr ior1,
        CORBA::Object_ptr ior2,
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException,
        TAO_IOP::TAO_IOR_Manipulation::EmptyProfileList,
        TAO_IOP::TAO_IOR_Manipulation::Duplicate,
        TAO_IOP::TAO_IOR_Manipulation::Invalid_IOR
      )) = 0;

    virtual CORBA::Object_ptr remove_profiles (
        CORBA::Object_ptr ior1,
        CORBA::Object_ptr ior2,
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException,
        TAO_IOP::TAO_IOR_Manipulation::Invalid_IOR,
        TAO_IOP::TAO_IOR_Manipulation::EmptyProfileList,
        TAO_IOP::TAO_IOR_Manipulation::NotFound
      )) = 0;

    virtual CORBA::ULong is_in_ior (
        CORBA::Object_ptr ior1,
        CORBA::Object_ptr ior2,
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException,
        TAO_IOP::TAO_IOR_Manipulation::NotFound
      )) = 0;

    virtual CORBA::ULong get_profile_count (
        CORBA::Object_ptr ior,
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException,
        TAO_IOP::TAO_IOR_Manipulation::EmptyProfileList
      )) = 0;

  };


#if !defined (_TAO_IOP_TAO_IOR_MANIPULATION___COLLOCATED_SH_)
#define _TAO_IOP_TAO_IOR_MANIPULATION___COLLOCATED_SH_

  class TAO_Export  _tao_collocated_TAO_IOR_Manipulation     : public virtual TAO_IOP::TAO_IOR_Manipulation
  {
  public:
    _tao_collocated_TAO_IOR_Manipulation (
        TAO_IOR_Manipulation_ptr  servant,
        TAO_Stub *stub
      );
    TAO_IOR_Manipulation_ptr _get_servant (void) const;
        virtual CORBA::Object_ptr merge_iors (
        const TAO_IOP::TAO_IOR_Manipulation::IORList & iors,
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException,
        TAO_IOP::TAO_IOR_Manipulation::EmptyProfileList,
        TAO_IOP::TAO_IOR_Manipulation::Duplicate,
        TAO_IOP::TAO_IOR_Manipulation::Invalid_IOR
      ));

    virtual CORBA::Object_ptr add_profiles (
        CORBA::Object_ptr ior1,
        CORBA::Object_ptr ior2,
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException,
        TAO_IOP::TAO_IOR_Manipulation::EmptyProfileList,
        TAO_IOP::TAO_IOR_Manipulation::Duplicate,
        TAO_IOP::TAO_IOR_Manipulation::Invalid_IOR
      ));

    virtual CORBA::Object_ptr remove_profiles (
        CORBA::Object_ptr ior1,
        CORBA::Object_ptr ior2,
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException,
        TAO_IOP::TAO_IOR_Manipulation::Invalid_IOR,
        TAO_IOP::TAO_IOR_Manipulation::EmptyProfileList,
        TAO_IOP::TAO_IOR_Manipulation::NotFound
      ));

    virtual CORBA::ULong is_in_ior (
        CORBA::Object_ptr ior1,
        CORBA::Object_ptr ior2,
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException,
        TAO_IOP::TAO_IOR_Manipulation::NotFound
      ));

    virtual CORBA::ULong get_profile_count (
        CORBA::Object_ptr ior,
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException,
        TAO_IOP::TAO_IOR_Manipulation::EmptyProfileList
      ));


  private:
    TAO_IOR_Manipulation_ptr servant_;
  };

}
TAO_NAMESPACE_CLOSE

#endif /* end #if !defined */


#if defined (__ACE_INLINE__)
#include "IORS.i"
#endif /* defined INLINE */

#if defined(_MSC_VER)
#pragma warning(default:4250)
#endif /* _MSC_VER */

#endif /* ifndef */
