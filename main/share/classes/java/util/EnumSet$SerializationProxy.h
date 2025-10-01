#ifndef _java_util_EnumSet$SerializationProxy_h_
#define _java_util_EnumSet$SerializationProxy_h_
//$ class java.util.EnumSet$SerializationProxy
//$ extends java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>

#pragma push_macro("ZERO_LENGTH_ENUM_ARRAY")
#undef ZERO_LENGTH_ENUM_ARRAY

namespace java {
	namespace lang {
		class Enum;
	}
}
namespace java {
	namespace util {
		class EnumSet;
	}
}

namespace java {
	namespace util {

class EnumSet$SerializationProxy : public ::java::io::Serializable {
	$class(EnumSet$SerializationProxy, 0, ::java::io::Serializable)
public:
	EnumSet$SerializationProxy();
	void init$(::java::util::EnumSet* set);
	$Object* readResolve();
	static $Array<::java::lang::Enum>* ZERO_LENGTH_ENUM_ARRAY;
	$Class* elementType = nullptr;
	$Array<::java::lang::Enum>* elements = nullptr;
	static const int64_t serialVersionUID = (int64_t)0x0507D3DB7654CAD1;
};

	} // util
} // java

#pragma pop_macro("ZERO_LENGTH_ENUM_ARRAY")

#endif // _java_util_EnumSet$SerializationProxy_h_