#ifndef _java_io_ObjectStreamClass$RecordSupport_h_
#define _java_io_ObjectStreamClass$RecordSupport_h_
//$ class java.io.ObjectStreamClass$RecordSupport
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("PRIM_VALUE_EXTRACTORS")
#undef PRIM_VALUE_EXTRACTORS

namespace java {
	namespace io {
		class ObjectStreamClass;
	}
}
namespace java {
	namespace lang {
		namespace invoke {
			class MethodHandle;
		}
	}
}
namespace java {
	namespace util {
		class Map;
	}
}

namespace java {
	namespace io {

class $export ObjectStreamClass$RecordSupport : public ::java::lang::Object {
	$class(ObjectStreamClass$RecordSupport, 0, ::java::lang::Object)
public:
	ObjectStreamClass$RecordSupport();
	void init$();
	static ::java::lang::invoke::MethodHandle* deserializationCtr(::java::io::ObjectStreamClass* desc);
	static int32_t numberPrimValues(::java::io::ObjectStreamClass* desc);
	static ::java::lang::invoke::MethodHandle* streamFieldExtractor($String* pName, $Class* pType, ::java::io::ObjectStreamClass* desc);
	static ::java::util::Map* PRIM_VALUE_EXTRACTORS;
};

	} // io
} // java

#pragma pop_macro("PRIM_VALUE_EXTRACTORS")

#endif // _java_io_ObjectStreamClass$RecordSupport_h_