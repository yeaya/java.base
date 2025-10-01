#ifndef _jdk_internal_util_xml_impl_Input_h_
#define _jdk_internal_util_xml_impl_Input_h_
//$ class jdk.internal.util.xml.impl.Input
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class Reader;
	}
}

namespace jdk {
	namespace internal {
		namespace util {
			namespace xml {
				namespace impl {

class $export Input : public ::java::lang::Object {
	$class(Input, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Input();
	void init$(int32_t buffsize);
	void init$($chars* buff);
	void init$();
	$String* pubid = nullptr;
	$String* sysid = nullptr;
	$String* xmlenc = nullptr;
	char16_t xmlver = 0;
	::java::io::Reader* src = nullptr;
	$chars* chars = nullptr;
	int32_t chLen = 0;
	int32_t chIdx = 0;
	::jdk::internal::util::xml::impl::Input* next = nullptr;
};

				} // impl
			} // xml
		} // util
	} // internal
} // jdk

#endif // _jdk_internal_util_xml_impl_Input_h_