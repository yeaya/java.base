#ifndef _java_lang_System$Logger_h_
#define _java_lang_System$Logger_h_
//$ interface java.lang.System$Logger
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class System$Logger$Level;
		class Throwable;
	}
}
namespace java {
	namespace util {
		class ResourceBundle;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Supplier;
		}
	}
}

namespace java {
	namespace lang {

class $import System$Logger : public ::java::lang::Object {
	$interface(System$Logger, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $String* getName() {return nullptr;}
	virtual bool isLoggable(::java::lang::System$Logger$Level* level) {return false;}
	virtual void log(::java::lang::System$Logger$Level* level, $String* msg);
	virtual void log(::java::lang::System$Logger$Level* level, ::java::util::function::Supplier* msgSupplier);
	virtual void log(::java::lang::System$Logger$Level* level, Object$* obj);
	virtual void log(::java::lang::System$Logger$Level* level, $String* msg, $Throwable* thrown);
	virtual void log(::java::lang::System$Logger$Level* level, ::java::util::function::Supplier* msgSupplier, $Throwable* thrown);
	virtual void log(::java::lang::System$Logger$Level* level, $String* format, $ObjectArray* params);
	virtual void log(::java::lang::System$Logger$Level* level, ::java::util::ResourceBundle* bundle, $String* msg, $Throwable* thrown) {}
	virtual void log(::java::lang::System$Logger$Level* level, ::java::util::ResourceBundle* bundle, $String* format, $ObjectArray* params) {}
};

	} // lang
} // java

#endif // _java_lang_System$Logger_h_