#ifndef _jdk_internal_access_JavaAWTFontAccess_h_
#define _jdk_internal_access_JavaAWTFontAccess_h_
//$ interface jdk.internal.access.JavaAWTFontAccess
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace jdk {
	namespace internal {
		namespace access {

class $export JavaAWTFontAccess : public ::java::lang::Object {
	$interface(JavaAWTFontAccess, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Object* getTextAttributeConstant($String* name) {return nullptr;}
	virtual void shape(Object$* shaper, $chars* text, int32_t start, int32_t count) {}
};

		} // access
	} // internal
} // jdk

#endif // _jdk_internal_access_JavaAWTFontAccess_h_