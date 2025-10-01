#ifndef _sun_invoke_util_BytecodeDescriptor_h_
#define _sun_invoke_util_BytecodeDescriptor_h_
//$ class sun.invoke.util.BytecodeDescriptor
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class ClassLoader;
		class StringBuilder;
	}
}
namespace java {
	namespace lang {
		namespace invoke {
			class MethodType;
		}
	}
}
namespace java {
	namespace util {
		class List;
	}
}

namespace sun {
	namespace invoke {
		namespace util {

class $export BytecodeDescriptor : public ::java::lang::Object {
	$class(BytecodeDescriptor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	BytecodeDescriptor();
	void init$();
	static void parseError($String* str, $String* msg);
	static ::java::util::List* parseMethod($String* bytecodeSignature, ::java::lang::ClassLoader* loader);
	static ::java::util::List* parseMethod($String* bytecodeSignature, int32_t start, int32_t end, ::java::lang::ClassLoader* loader);
	static $Class* parseSig($String* str, $ints* i, int32_t end, ::java::lang::ClassLoader* loader);
	static $String* unparse($Class* type);
	static $String* unparse(::java::lang::invoke::MethodType* type);
	static $String* unparse(Object$* type);
	static $String* unparseMethod($Class* rtype, ::java::util::List* ptypes);
	static $String* unparseMethod($Class* rtype, $ClassArray* ptypes);
	static void unparseSig($Class* t, ::java::lang::StringBuilder* sb);
};

		} // util
	} // invoke
} // sun

#endif // _sun_invoke_util_BytecodeDescriptor_h_