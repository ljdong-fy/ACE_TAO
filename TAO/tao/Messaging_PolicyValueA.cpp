// -*- C++ -*-
//
// $Id$

// ****  Code generated by the The ACE ORB (TAO) IDL Compiler ****
// TAO and the TAO IDL Compiler have been developed by:
//       Center for Distributed Object Computing
//       Washington University
//       St. Louis, MO
//       USA
//       http://www.cs.wustl.edu/~schmidt/doc-center.html
// and
//       Distributed Object Computing Laboratory
//       University of California at Irvine
//       Irvine, CA
//       USA
//       http://doc.ece.uci.edu/
// and
//       Institute for Software Integrated Systems
//       Vanderbilt University
//       Nashville, TN
//       USA
//       http://www.isis.vanderbilt.edu/
//
// Information about TAO is available at:
//     http://www.cs.wustl.edu/~schmidt/TAO.html

#include "Messaging_PolicyValueC.h"
#include "tao/Typecode.h"
#include "tao/CDR.h"
#include "tao/Any.h"
#include "tao/Any_Dual_Impl_T.h"

// TAO_IDL - Generated from
// be\be_visitor_typecode/typecode_defn.cpp:295

static const CORBA::Long _oc_Messaging_PolicyValue[] =
{
    TAO_ENCAP_BYTE_ORDER, // byte order
  38,
  ACE_NTOHL (0x49444c3a), 
  ACE_NTOHL (0x6f6d672e), 
  ACE_NTOHL (0x6f72672f), 
  ACE_NTOHL (0x4d657373), 
  ACE_NTOHL (0x6167696e), 
  ACE_NTOHL (0x672f506f), 
  ACE_NTOHL (0x6c696379), 
  ACE_NTOHL (0x56616c75), 
  ACE_NTOHL (0x653a312e), 
  ACE_NTOHL (0x30000000),  // repository ID = IDL:omg.org/Messaging/PolicyValue:1.0
    12,
  ACE_NTOHL (0x506f6c69), 
  ACE_NTOHL (0x63795661), 
  ACE_NTOHL (0x6c756500),  // name = PolicyValue
  2, // member count
    6,
  ACE_NTOHL (0x70747970), 
  ACE_NTOHL (0x65000000),  // name = ptype
    CORBA::tk_alias, // typecode kind for typedefs
  64, // encapsulation length
    TAO_ENCAP_BYTE_ORDER, // byte order
    33,
    ACE_NTOHL (0x49444c3a), 
    ACE_NTOHL (0x6f6d672e), 
    ACE_NTOHL (0x6f72672f), 
    ACE_NTOHL (0x434f5242), 
    ACE_NTOHL (0x412f506f), 
    ACE_NTOHL (0x6c696379), 
    ACE_NTOHL (0x54797065), 
    ACE_NTOHL (0x3a312e30), 
    ACE_NTOHL (0x0),  // repository ID = IDL:omg.org/CORBA/PolicyType:1.0
        11,
    ACE_NTOHL (0x506f6c69), 
    ACE_NTOHL (0x63795479), 
    ACE_NTOHL (0x70650000),  // name = PolicyType
        CORBA::tk_ulong,


  7,
  ACE_NTOHL (0x7076616c), 
  ACE_NTOHL (0x75650000),  // name = pvalue
    CORBA::tk_alias, // typecode kind for typedefs
  76, // encapsulation length
    TAO_ENCAP_BYTE_ORDER, // byte order
    31,
    ACE_NTOHL (0x49444c3a), 
    ACE_NTOHL (0x6f6d672e), 
    ACE_NTOHL (0x6f72672f), 
    ACE_NTOHL (0x434f5242), 
    ACE_NTOHL (0x412f4f63), 
    ACE_NTOHL (0x74657453), 
    ACE_NTOHL (0x65713a31), 
    ACE_NTOHL (0x2e300000),  // repository ID = IDL:omg.org/CORBA/OctetSeq:1.0
        9,
    ACE_NTOHL (0x4f637465), 
    ACE_NTOHL (0x74536571), 
    ACE_NTOHL (0x0),  // name = OctetSeq
        CORBA::tk_sequence, // typecode kind
    12, // encapsulation length
      TAO_ENCAP_BYTE_ORDER, // byte order
      CORBA::tk_octet,

      0U,


};

static CORBA::TypeCode _tc_TAO_tc_Messaging_PolicyValue (
    CORBA::tk_struct,
    sizeof (_oc_Messaging_PolicyValue),
    (char *) &_oc_Messaging_PolicyValue,
    0,
    0
  );

namespace Messaging
{
  ::CORBA::TypeCode_ptr _tc_PolicyValue =
    &_tc_TAO_tc_Messaging_PolicyValue;
}

// TAO_IDL - Generated from
// be\be_visitor_typecode/typecode_defn.cpp:295

static const CORBA::Long _oc_Messaging_PolicyValueSeq[] =
{
    TAO_ENCAP_BYTE_ORDER, // byte order
  41,
  ACE_NTOHL (0x49444c3a), 
  ACE_NTOHL (0x6f6d672e), 
  ACE_NTOHL (0x6f72672f), 
  ACE_NTOHL (0x4d657373), 
  ACE_NTOHL (0x6167696e), 
  ACE_NTOHL (0x672f506f), 
  ACE_NTOHL (0x6c696379), 
  ACE_NTOHL (0x56616c75), 
  ACE_NTOHL (0x65536571), 
  ACE_NTOHL (0x3a312e30), 
  ACE_NTOHL (0x0),  // repository ID = IDL:omg.org/Messaging/PolicyValueSeq:1.0
    15,
  ACE_NTOHL (0x506f6c69), 
  ACE_NTOHL (0x63795661), 
  ACE_NTOHL (0x6c756553), 
  ACE_NTOHL (0x65710000),  // name = PolicyValueSeq
    CORBA::tk_sequence, // typecode kind
  264, // encapsulation length
    TAO_ENCAP_BYTE_ORDER, // byte order
    CORBA::tk_struct, // typecode kind
    248, // encapsulation length
      TAO_ENCAP_BYTE_ORDER, // byte order
      38,
      ACE_NTOHL (0x49444c3a), 
      ACE_NTOHL (0x6f6d672e), 
      ACE_NTOHL (0x6f72672f), 
      ACE_NTOHL (0x4d657373), 
      ACE_NTOHL (0x6167696e), 
      ACE_NTOHL (0x672f506f), 
      ACE_NTOHL (0x6c696379), 
      ACE_NTOHL (0x56616c75), 
      ACE_NTOHL (0x653a312e), 
      ACE_NTOHL (0x30000000),  // repository ID = IDL:omg.org/Messaging/PolicyValue:1.0
            12,
      ACE_NTOHL (0x506f6c69), 
      ACE_NTOHL (0x63795661), 
      ACE_NTOHL (0x6c756500),  // name = PolicyValue
      2, // member count
            6,
      ACE_NTOHL (0x70747970), 
      ACE_NTOHL (0x65000000),  // name = ptype
            CORBA::tk_alias, // typecode kind for typedefs
      64, // encapsulation length
        TAO_ENCAP_BYTE_ORDER, // byte order
        33,
        ACE_NTOHL (0x49444c3a), 
        ACE_NTOHL (0x6f6d672e), 
        ACE_NTOHL (0x6f72672f), 
        ACE_NTOHL (0x434f5242), 
        ACE_NTOHL (0x412f506f), 
        ACE_NTOHL (0x6c696379), 
        ACE_NTOHL (0x54797065), 
        ACE_NTOHL (0x3a312e30), 
        ACE_NTOHL (0x0),  // repository ID = IDL:omg.org/CORBA/PolicyType:1.0
                11,
        ACE_NTOHL (0x506f6c69), 
        ACE_NTOHL (0x63795479), 
        ACE_NTOHL (0x70650000),  // name = PolicyType
                CORBA::tk_ulong,


      7,
      ACE_NTOHL (0x7076616c), 
      ACE_NTOHL (0x75650000),  // name = pvalue
            CORBA::tk_alias, // typecode kind for typedefs
      76, // encapsulation length
        TAO_ENCAP_BYTE_ORDER, // byte order
        31,
        ACE_NTOHL (0x49444c3a), 
        ACE_NTOHL (0x6f6d672e), 
        ACE_NTOHL (0x6f72672f), 
        ACE_NTOHL (0x434f5242), 
        ACE_NTOHL (0x412f4f63), 
        ACE_NTOHL (0x74657453), 
        ACE_NTOHL (0x65713a31), 
        ACE_NTOHL (0x2e300000),  // repository ID = IDL:omg.org/CORBA/OctetSeq:1.0
                9,
        ACE_NTOHL (0x4f637465), 
        ACE_NTOHL (0x74536571), 
        ACE_NTOHL (0x0),  // name = OctetSeq
                CORBA::tk_sequence, // typecode kind
        12, // encapsulation length
          TAO_ENCAP_BYTE_ORDER, // byte order
          CORBA::tk_octet,

          0U,



    0U,

};

static CORBA::TypeCode _tc_TAO_tc_Messaging_PolicyValueSeq (
    CORBA::tk_alias,
    sizeof (_oc_Messaging_PolicyValueSeq),
    (char *) &_oc_Messaging_PolicyValueSeq,
    0,
    0
  );

namespace Messaging
{
  ::CORBA::TypeCode_ptr _tc_PolicyValueSeq =
    &_tc_TAO_tc_Messaging_PolicyValueSeq;
}

// TAO_IDL - Generated from 
// be\be_visitor_structure/any_op_cs.cpp:54

// Copying insertion.
void operator<<= (
    CORBA::Any &_tao_any,
    const Messaging::PolicyValue &_tao_elem
  )
{
  TAO::Any_Dual_Impl_T<Messaging::PolicyValue>::insert_copy (
      _tao_any,
      Messaging::PolicyValue::_tao_any_destructor,
      Messaging::_tc_PolicyValue,
      _tao_elem
    );
}

// Non-copying insertion.
void operator<<= (
    CORBA::Any &_tao_any,
    Messaging::PolicyValue *_tao_elem
  )
{
  TAO::Any_Dual_Impl_T<Messaging::PolicyValue>::insert (
      _tao_any,
      Messaging::PolicyValue::_tao_any_destructor,
      Messaging::_tc_PolicyValue,
      _tao_elem
    );
}

// Extraction to non-const pointer (deprecated).
CORBA::Boolean operator>>= (
    const CORBA::Any &_tao_any,
    Messaging::PolicyValue *&_tao_elem
  )
{
  return _tao_any >>= const_cast<
      const Messaging::PolicyValue *&> (
      _tao_elem
    );
}

// Extraction to const pointer.
CORBA::Boolean operator>>= (
    const CORBA::Any &_tao_any,
    const Messaging::PolicyValue *&_tao_elem
  )
{
  return
    TAO::Any_Dual_Impl_T<Messaging::PolicyValue>::extract (
        _tao_any,
        Messaging::PolicyValue::_tao_any_destructor,
        Messaging::_tc_PolicyValue,
        _tao_elem
      );
}

// TAO_IDL - Generated from 
// be\be_visitor_sequence/any_op_cs.cpp:54

// Copying insertion.
void operator<<= (
    CORBA::Any &_tao_any,
    const Messaging::PolicyValueSeq &_tao_elem
  )
{
  TAO::Any_Dual_Impl_T<Messaging::PolicyValueSeq>::insert_copy (
      _tao_any,
      Messaging::PolicyValueSeq::_tao_any_destructor,
      Messaging::_tc_PolicyValueSeq,
      _tao_elem
    );
}

// Non-copying insertion.
void operator<<= (
    CORBA::Any &_tao_any,
    Messaging::PolicyValueSeq *_tao_elem
  )
{
  TAO::Any_Dual_Impl_T<Messaging::PolicyValueSeq>::insert (
      _tao_any,
      Messaging::PolicyValueSeq::_tao_any_destructor,
      Messaging::_tc_PolicyValueSeq,
      _tao_elem
    );
}

// Extraction to non-const pointer (deprecated).
CORBA::Boolean operator>>= (
    const CORBA::Any &_tao_any,
    Messaging::PolicyValueSeq *&_tao_elem
  )
{
  return _tao_any >>= const_cast<
      const Messaging::PolicyValueSeq *&> (
      _tao_elem
    );
}

// Extraction to const pointer.
CORBA::Boolean operator>>= (
    const CORBA::Any &_tao_any,
    const Messaging::PolicyValueSeq *&_tao_elem
  )
{
  return
    TAO::Any_Dual_Impl_T<Messaging::PolicyValueSeq>::extract (
        _tao_any,
        Messaging::PolicyValueSeq::_tao_any_destructor,
        Messaging::_tc_PolicyValueSeq,
        _tao_elem
      );
}

#if defined (ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION)

  template class
    TAO::Any_Dual_Impl_T<
        Messaging::PolicyValue
      >;

  template class
    TAO::Any_Dual_Impl_T<
        Messaging::PolicyValueSeq
      >;

#elif defined (ACE_HAS_TEMPLATE_INSTANTIATION_PRAGMA)

# pragma instantiate \
    TAO::Any_Dual_Impl_T< \
        Messaging::PolicyValue \
      >

# pragma instantiate \
    TAO::Any_Dual_Impl_T< \
        Messaging::PolicyValueSeq \
      >

#endif /* !ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION */ 
