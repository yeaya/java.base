#ifndef _java_io_ObjectInputFilter$Config_h_
#define _java_io_ObjectInputFilter$Config_h_
//$ class java.io.ObjectInputFilter$Config
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("SERIAL_FILTER_FACTORY_PROPNAME")
#undef SERIAL_FILTER_FACTORY_PROPNAME
#pragma push_macro("SERIAL_FILTER_PROPNAME")
#undef SERIAL_FILTER_PROPNAME

namespace java {
	namespace io {
		class ObjectInputFilter;
	}
}
namespace java {
	namespace lang {
		class System$Logger;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicBoolean;
			}
		}
	}
}
namespace java {
	namespace util {
		namespace function {
			class BinaryOperator;
		}
	}
}

namespace java {
	namespace io {

class $import ObjectInputFilter$Config : public ::java::lang::Object {
	$class(ObjectInputFilter$Config, 0, ::java::lang::Object)
public:
	ObjectInputFilter$Config();
	void init$();
	static ::java::io::ObjectInputFilter* createFilter($String* pattern);
	static ::java::io::ObjectInputFilter* createFilter2($String* pattern);
	static ::java::io::ObjectInputFilter* getSerialFilter();
	static ::java::util::function::BinaryOperator* getSerialFilterFactory();
	static ::java::util::function::BinaryOperator* getSerialFilterFactorySingleton();
	static $String* lambda$static$0();
	static $String* lambda$static$1();
	static void setSerialFilter(::java::io::ObjectInputFilter* filter);
	static void setSerialFilterFactory(::java::util::function::BinaryOperator* filterFactory);
	static void traceFilter($String* msg, $ObjectArray* args);
	static $Object* serialFilterLock;
	static $String* SERIAL_FILTER_PROPNAME;
	static $String* SERIAL_FILTER_FACTORY_PROPNAME;
	static $volatile(::java::io::ObjectInputFilter*) serialFilter;
	static $volatile(::java::util::function::BinaryOperator*) serialFilterFactory;
	static ::java::util::concurrent::atomic::AtomicBoolean* filterFactoryNoReplace;
	static ::java::lang::System$Logger* configLog;
};

	} // io
} // java

#pragma pop_macro("SERIAL_FILTER_FACTORY_PROPNAME")
#pragma pop_macro("SERIAL_FILTER_PROPNAME")

#endif // _java_io_ObjectInputFilter$Config_h_