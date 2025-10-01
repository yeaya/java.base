#ifndef _jdk_internal_util_xml_impl_Pair_h_
#define _jdk_internal_util_xml_impl_Pair_h_
//$ class jdk.internal.util.xml.impl.Pair
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace jdk {
	namespace internal {
		namespace util {
			namespace xml {
				namespace impl {

class $import Pair : public ::java::lang::Object {
	$class(Pair, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Pair();
	void init$();
	virtual bool eqname($chars* qname);
	virtual bool eqpref($chars* qname);
	virtual $String* local();
	virtual $String* pref();
	virtual $String* qname();
	$String* name = nullptr;
	$String* value = nullptr;
	int32_t num = 0;
	$chars* chars = nullptr;
	int32_t id = 0;
	::jdk::internal::util::xml::impl::Pair* list = nullptr;
	::jdk::internal::util::xml::impl::Pair* next = nullptr;
};

				} // impl
			} // xml
		} // util
	} // internal
} // jdk

#endif // _jdk_internal_util_xml_impl_Pair_h_