#ifndef _sun_security_util_ConsoleCallbackHandler$1OptionInfo_h_
#define _sun_security_util_ConsoleCallbackHandler$1OptionInfo_h_
//$ class sun.security.util.ConsoleCallbackHandler$1OptionInfo
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace security {
		namespace util {
			class ConsoleCallbackHandler;
		}
	}
}

namespace sun {
	namespace security {
		namespace util {

class ConsoleCallbackHandler$1OptionInfo : public ::java::lang::Object {
	$class(ConsoleCallbackHandler$1OptionInfo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ConsoleCallbackHandler$1OptionInfo();
	void init$(::sun::security::util::ConsoleCallbackHandler* this$0, $String* name, int32_t value);
	::sun::security::util::ConsoleCallbackHandler* this$0 = nullptr;
	$String* name = nullptr;
	int32_t value = 0;
};

		} // util
	} // security
} // sun

#endif // _sun_security_util_ConsoleCallbackHandler$1OptionInfo_h_