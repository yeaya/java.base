#ifndef _java_lang_System_h_
#define _java_lang_System_h_
//$ class java.lang.System
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class MethodInfo;
		class ModuleInfo;
		class ClassEntry;
		class ResourceEntry;
		class Library;
	}
}

#pragma push_macro("MAYBE")
#undef MAYBE
#pragma push_macro("NEVER")
#undef NEVER

namespace java {
	namespace io {
		class Console;
		class FileOutputStream;
		class InputStream;
		class PrintStream;
	}
}
namespace java {
	namespace lang {
		class ModuleLayer;
		class SecurityManager;
		class System$Logger;
		class Throwable;
	}
}
namespace java {
	namespace net {
		class URL;
	}
}
namespace java {
	namespace nio {
		namespace channels {
			class Channel;
		}
	}
}
namespace java {
	namespace util {
		class Map;
		class Properties;
		class ResourceBundle;
	}
}

namespace java {
	namespace lang {

class $export System : public ::java::lang::Object {
	$class(System, $PRELOAD | $PREINIT, ::java::lang::Object)
public:
	System();
	void init$();
	static bool allowSecurityManager();
	static void arraycopy(Object$* src, int32_t srcPos, Object$* dest, int32_t destPos, int32_t length);
	static void checkIO();
	static void checkKey($String* key);
	static $String* clearProperty($String* key);
	static ::java::net::URL* codeSource($Class* clazz);
	static ::java::io::Console* console();
	static ::java::util::Properties* createProperties(::java::util::Map* initialProps);
	static int64_t currentTimeMillis();
	static void exit(int32_t status);
	static void gc();
	static ::java::lang::System$Logger* getLogger($String* name);
	static ::java::lang::System$Logger* getLogger($String* name, ::java::util::ResourceBundle* bundle);
	static ::java::util::Properties* getProperties();
	static $String* getProperty($String* key);
	static $String* getProperty($String* key, $String* def);
	static ::java::lang::SecurityManager* getSecurityManager();
	static $String* getenv($String* name);
	static ::java::util::Map* getenv();
	static int32_t identityHashCode(Object$* x);
	static void implSetSecurityManager(::java::lang::SecurityManager* sm);
	static ::java::nio::channels::Channel* inheritedChannel();
	static void initPhase1();
	static int32_t initPhase2(bool printToStderr, bool printStackTrace);
	static void initPhase3();
	static ::java::lang::System$Logger* lambda$getLogger$0($String* name, ::java::util::ResourceBundle* rb, $Class* caller);
	static $String* lineSeparator();
	static void load($String* filename);
	static void loadLibrary($String* libname);
	static void logInitException(bool printToStderr, bool printStackTrace, $String* msg, $Throwable* e);
	static $String* mapLibraryName($String* libname);
	static int64_t nanoTime();
	static ::java::io::PrintStream* newPrintStream(::java::io::FileOutputStream* fos, $String* enc);
	static void registerNatives();
	static void runFinalization();
	static void setErr(::java::io::PrintStream* err);
	static void setErr0(::java::io::PrintStream* err);
	static void setIn(::java::io::InputStream* in);
	static void setIn0(::java::io::InputStream* in);
	static void setJavaLangAccess();
	static void setOut(::java::io::PrintStream* out);
	static void setOut0(::java::io::PrintStream* out);
	static void setProperties(::java::util::Properties* props);
	static $String* setProperty($String* key, $String* value);
	static void setSecurityManager(::java::lang::SecurityManager* sm);
	static void setSecurityManager0(::java::lang::SecurityManager* s);
	static ::java::io::InputStream* in;
	static ::java::io::PrintStream* out;
	static ::java::io::PrintStream* err;
	static const int32_t NEVER = 1;
	static const int32_t MAYBE = 2;
	static int32_t allowSecurityManager$;
	static $volatile(::java::lang::SecurityManager*) security;
	static $volatile(::java::io::Console*) cons;
	static $volatile(::java::io::PrintStream*) initialErrStream;
	static ::java::util::Properties* props;
	static $String* lineSeparator$;
	static ::java::lang::ModuleLayer* bootLayer;
public:
	static void addLibrary(Library* lib);
	static void init();
	static void deinit();
	static void* getJNIEnv();
	static void* loadNativeMethod(Class* clazz, MethodInfo* methodInfo);
};

	} // lang
} // java

#pragma pop_macro("MAYBE")
#pragma pop_macro("NEVER")

#endif // _java_lang_System_h_