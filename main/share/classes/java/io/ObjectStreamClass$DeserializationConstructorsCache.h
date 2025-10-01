#ifndef _java_io_ObjectStreamClass$DeserializationConstructorsCache_h_
#define _java_io_ObjectStreamClass$DeserializationConstructorsCache_h_
//$ class java.io.ObjectStreamClass$DeserializationConstructorsCache
//$ extends java.util.concurrent.ConcurrentHashMap

#include <java/lang/Array.h>
#include <java/util/concurrent/ConcurrentHashMap.h>

#pragma push_macro("MAX_SIZE")
#undef MAX_SIZE

namespace java {
	namespace io {
		class ObjectStreamClass$DeserializationConstructorsCache$Key$Impl;
		class ObjectStreamField;
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
	namespace io {

class ObjectStreamClass$DeserializationConstructorsCache : public ::java::util::concurrent::ConcurrentHashMap {
	$class(ObjectStreamClass$DeserializationConstructorsCache, 0, ::java::util::concurrent::ConcurrentHashMap)
public:
	ObjectStreamClass$DeserializationConstructorsCache();
	using ::java::util::concurrent::ConcurrentHashMap::get;
	void init$();
	::java::lang::invoke::MethodHandle* get($Array<::java::io::ObjectStreamField>* fields);
	::java::lang::invoke::MethodHandle* putIfAbsentAndGet($Array<::java::io::ObjectStreamField>* fields, ::java::lang::invoke::MethodHandle* mh);
	static bool $assertionsDisabled;
	static const int32_t MAX_SIZE = 10;
	::java::io::ObjectStreamClass$DeserializationConstructorsCache$Key$Impl* first = nullptr;
	::java::io::ObjectStreamClass$DeserializationConstructorsCache$Key$Impl* last = nullptr;
};

	} // io
} // java

#pragma pop_macro("MAX_SIZE")

#endif // _java_io_ObjectStreamClass$DeserializationConstructorsCache_h_