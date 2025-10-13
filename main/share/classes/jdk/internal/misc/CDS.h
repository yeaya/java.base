#ifndef _jdk_internal_misc_CDS_h_
#define _jdk_internal_misc_CDS_h_
//$ class jdk.internal.misc.CDS
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("BASIC_FORMS_HOLDER_CLASS_NAME")
#undef BASIC_FORMS_HOLDER_CLASS_NAME
#pragma push_macro("CDS")
#undef CDS
#pragma push_macro("DELEGATING_HOLDER_CLASS_NAME")
#undef DELEGATING_HOLDER_CLASS_NAME
#pragma push_macro("DIRECT_HOLDER_CLASS_NAME")
#undef DIRECT_HOLDER_CLASS_NAME
#pragma push_macro("INVOKERS_HOLDER_CLASS_NAME")
#undef INVOKERS_HOLDER_CLASS_NAME

namespace java {
	namespace io {
		class InputStream;
	}
}
namespace java {
	namespace lang {
		class ClassLoader;
	}
}
namespace java {
	namespace util {
		class List;
	}
}

namespace jdk {
	namespace internal {
		namespace misc {

class $export CDS : public ::java::lang::Object {
	$class(CDS, $PRELOAD, ::java::lang::Object)
public:
	CDS();
	void init$();
	static bool containsExcludedFlags($String* testStr);
	static void defineArchivedModules(::java::lang::ClassLoader* platformLoader, ::java::lang::ClassLoader* systemLoader);
	static $String* drainOutput(::java::io::InputStream* stream, int64_t pid, $String* tail, ::java::util::List* cmds);
	static void dumpClassList($String* listFileName);
	static void dumpDynamicArchive($String* archiveFileName);
	static void dumpSharedArchive(bool isStatic, $String* fileName);
	static $ObjectArray* generateLambdaFormHolderClasses($StringArray* lines);
	static int64_t getRandomSeedForDumping();
	static void initializeFromArchive($Class* c);
	static bool isBasicTypeChar(char16_t c);
	static bool isDumpingArchive();
	static bool isDumpingArchive0();
	static bool isDumpingClassList();
	static bool isDumpingClassList0();
	static bool isSharingEnabled();
	static bool isSharingEnabled0();
	static bool isValidHolderName($String* name);
	static bool isValidMethodType($String* type);
	static void lambda$drainOutput$0(::java::io::InputStream* stream, $String* fileName, ::java::util::List* cmds);
	static void logLambdaFormInvoker($String* line);
	static void traceLambdaFormInvoker($String* prefix, $String* holder, $String* name, $String* type);
	static void traceSpeciesType($String* prefix, $String* cn);
	static void validateInputLines($StringArray* lines);
	static bool isDumpingClassList$;
	static bool isDumpingArchive$;
	static bool isSharingEnabled$;
	static $String* DIRECT_HOLDER_CLASS_NAME;
	static $String* DELEGATING_HOLDER_CLASS_NAME;
	static $String* BASIC_FORMS_HOLDER_CLASS_NAME;
	static $String* INVOKERS_HOLDER_CLASS_NAME;
	static $StringArray* excludeFlags;
};

		} // misc
	} // internal
} // jdk

#pragma pop_macro("BASIC_FORMS_HOLDER_CLASS_NAME")
#pragma pop_macro("CDS")
#pragma pop_macro("DELEGATING_HOLDER_CLASS_NAME")
#pragma pop_macro("DIRECT_HOLDER_CLASS_NAME")
#pragma pop_macro("INVOKERS_HOLDER_CLASS_NAME")

#endif // _jdk_internal_misc_CDS_h_