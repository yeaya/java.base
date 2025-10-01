#ifndef _jdk_internal_platform_CgroupSubsystemController_h_
#define _jdk_internal_platform_CgroupSubsystemController_h_
//$ interface jdk.internal.platform.CgroupSubsystemController
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("EMPTY_STR")
#undef EMPTY_STR

namespace java {
	namespace util {
		namespace function {
			class Function;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace platform {

class $import CgroupSubsystemController : public ::java::lang::Object {
	$interface(CgroupSubsystemController, 0, ::java::lang::Object)
public:
	static int64_t convertStringToLong($String* strval, int64_t overflowRetval, int64_t defaultRetval);
	static double getDoubleValue(::jdk::internal::platform::CgroupSubsystemController* controller, $String* param, double defaultRetval);
	static int64_t getLongEntry(::jdk::internal::platform::CgroupSubsystemController* controller, $String* param, $String* entryname, int64_t defaultRetval);
	static int64_t getLongValue(::jdk::internal::platform::CgroupSubsystemController* controller, $String* param, ::java::util::function::Function* conversion, int64_t defaultRetval);
	static int64_t getLongValueMatchingLine(::jdk::internal::platform::CgroupSubsystemController* controller, $String* param, $String* match, ::java::util::function::Function* conversion, int64_t defaultRetval);
	static $String* getStringValue(::jdk::internal::platform::CgroupSubsystemController* controller, $String* param);
	static $StringArray* lambda$getLongEntry$0($String* line);
	static bool lambda$getLongEntry$1($String* entryname, $StringArray* line);
	static $String* lambda$getLongEntry$2($StringArray* line);
	virtual $String* path() {return nullptr;}
	static $ints* stringRangeToIntArray($String* range);
	static $String* EMPTY_STR;
};

		} // platform
	} // internal
} // jdk

#pragma pop_macro("EMPTY_STR")

#endif // _jdk_internal_platform_CgroupSubsystemController_h_