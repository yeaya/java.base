#ifndef _sun_launcher_LauncherHelper_h_
#define _sun_launcher_LauncherHelper_h_
//$ class sun.launcher.LauncherHelper
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("ADD_EXPORTS")
#undef ADD_EXPORTS
#pragma push_macro("ADD_OPENS")
#undef ADD_OPENS
#pragma push_macro("INDENT")
#undef INDENT
#pragma push_macro("JAVAFX_APPLICATION_CLASS_NAME")
#undef JAVAFX_APPLICATION_CLASS_NAME
#pragma push_macro("JAVAFX_APPLICATION_MARKER")
#undef JAVAFX_APPLICATION_MARKER
#pragma push_macro("JAVAFX_FXHELPER_CLASS_NAME_SUFFIX")
#undef JAVAFX_FXHELPER_CLASS_NAME_SUFFIX
#pragma push_macro("LAUNCHER_AGENT_CLASS")
#undef LAUNCHER_AGENT_CLASS
#pragma push_macro("LM_CLASS")
#undef LM_CLASS
#pragma push_macro("LM_JAR")
#undef LM_JAR
#pragma push_macro("LM_MODULE")
#undef LM_MODULE
#pragma push_macro("LM_SOURCE")
#undef LM_SOURCE
#pragma push_macro("LM_UNKNOWN")
#undef LM_UNKNOWN
#pragma push_macro("LOCALE_SETTINGS")
#undef LOCALE_SETTINGS
#pragma push_macro("MAIN_CLASS")
#undef MAIN_CLASS
#pragma push_macro("PROP_SETTINGS")
#undef PROP_SETTINGS
#pragma push_macro("VM_SETTINGS")
#undef VM_SETTINGS

namespace java {
	namespace io {
		class PrintStream;
	}
}
namespace java {
	namespace lang {
		class Module;
		class StringBuilder;
		class Throwable;
	}
}
namespace java {
	namespace lang {
		namespace module {
			class ModuleDescriptor;
			class ModuleDescriptor$Exports;
			class ModuleReference;
		}
	}
}
namespace java {
	namespace net {
		class URI;
	}
}
namespace java {
	namespace util {
		class List;
		class Set;
	}
}
namespace java {
	namespace util {
		namespace stream {
			class Stream;
		}
	}
}

namespace sun {
	namespace launcher {

class LauncherHelper : public ::java::lang::Object {
	$class(LauncherHelper, 0, ::java::lang::Object)
public:
	LauncherHelper();
	void init$();
	static void abort($Throwable* t, $String* msgKey, $ObjectArray* args);
	static void addExportsOrOpens($String* value, bool open);
	static void appendVmSelectMessage($String* vm1, $String* vm2);
	static void appendVmSynonymMessage($String* vm1, $String* vm2);
	static $Class* checkAndLoadMain(bool printToStderr, int32_t mode, $String* what);
	static void describeModule($String* moduleName);
	static bool doesExtendFXApplication($Class* mainClass);
	static $StringArray* expandArgs($StringArray* argArray);
	static $StringArray* expandArgs(::java::util::List* argList);
	static $String* formatCpuVal(int64_t cpuVal, $String* prefix, int64_t unavailable);
	static $String* formatLimitString(int64_t limit, $String* prefix, int64_t unavailable);
	static $Class* getApplicationClass();
	static $String* getLocalizedMessage($String* key, $ObjectArray* args);
	static $String* getMainClassFromJar($String* jarname);
	static void initHelpMessage($String* progname);
	static void initOutput(bool printToStderr);
	static void initOutput(::java::io::PrintStream* ps);
	static bool isJrt(::java::lang::module::ModuleReference* mref);
	static bool isJrt(::java::net::URI* uri);
	static bool isPath($String* key);
	static bool lambda$addExportsOrOpens$1($String* pn, ::java::lang::Module* m);
	static void lambda$addExportsOrOpens$2(bool open, $String* pn, ::java::lang::Module* m);
	static bool lambda$describeModule$3(::java::lang::module::ModuleDescriptor$Exports* e);
	static $String* lambda$describeModule$4(::java::lang::module::ModuleDescriptor$Exports* e);
	static void lambda$describeModule$5($String* sourceAndMods);
	static void lambda$describeModule$6(::java::lang::module::ModuleDescriptor* any);
	static void lambda$describeModule$7($String* p);
	static void lambda$getMainClassFromJar$0($String* jarname, ::java::lang::Module* m);
	static bool lambda$showModule$8(::java::net::URI* uri);
	static void lambda$showModule$9(::java::net::URI* uri);
	static $String* lambda$toStringStream$10(Object$* e);
	static void listModules();
	static $Class* loadMainClass(int32_t mode, $String* what);
	static $Class* loadModuleMainClass($String* what);
	static $String* makePlatformString(bool printToStderr, $bytes* inArray);
	static void printHelpMessage(bool printToStderr);
	static void printLocale();
	static void printLocales();
	static void printProperties();
	static void printPropertyValue($String* key, $String* value);
	static void printSystemMetrics();
	static void printVmSettings(int64_t initialHeapSize, int64_t maxHeapSize, int64_t stackSize);
	static void printXUsageMessage(bool printToStderr);
	static void showModule(::java::lang::module::ModuleReference* mref);
	static void showResolvedModules();
	static void showSettings(bool printToStderr, $String* optionFlag, int64_t initialHeapSize, int64_t maxHeapSize, int64_t stackSize);
	static ::java::util::stream::Stream* toStringStream(::java::util::Set* s);
	static void validateMainClass($Class* mainClass);
	static $String* JAVAFX_APPLICATION_MARKER;
	static $String* JAVAFX_APPLICATION_CLASS_NAME;
	static $String* JAVAFX_FXHELPER_CLASS_NAME_SUFFIX;
	static $String* LAUNCHER_AGENT_CLASS;
	static $String* MAIN_CLASS;
	static $String* ADD_EXPORTS;
	static $String* ADD_OPENS;
	static ::java::lang::StringBuilder* outBuf;
	static $String* INDENT;
	static $String* VM_SETTINGS;
	static $String* PROP_SETTINGS;
	static $String* LOCALE_SETTINGS;
	static $String* diagprop;
	static bool trace;
	static $String* defaultBundleName;
	static ::java::io::PrintStream* ostream;
	static $Class* appClass;
	static const int32_t LM_UNKNOWN = 0;
	static const int32_t LM_CLASS = 1;
	static const int32_t LM_JAR = 2;
	static const int32_t LM_MODULE = 3;
	static const int32_t LM_SOURCE = 4;
	static $String* encprop;
	static $String* encoding;
	static bool isCharsetSupported;
};

	} // launcher
} // sun

#pragma pop_macro("ADD_EXPORTS")
#pragma pop_macro("ADD_OPENS")
#pragma pop_macro("INDENT")
#pragma pop_macro("JAVAFX_APPLICATION_CLASS_NAME")
#pragma pop_macro("JAVAFX_APPLICATION_MARKER")
#pragma pop_macro("JAVAFX_FXHELPER_CLASS_NAME_SUFFIX")
#pragma pop_macro("LAUNCHER_AGENT_CLASS")
#pragma pop_macro("LM_CLASS")
#pragma pop_macro("LM_JAR")
#pragma pop_macro("LM_MODULE")
#pragma pop_macro("LM_SOURCE")
#pragma pop_macro("LM_UNKNOWN")
#pragma pop_macro("LOCALE_SETTINGS")
#pragma pop_macro("MAIN_CLASS")
#pragma pop_macro("PROP_SETTINGS")
#pragma pop_macro("VM_SETTINGS")

#endif // _sun_launcher_LauncherHelper_h_