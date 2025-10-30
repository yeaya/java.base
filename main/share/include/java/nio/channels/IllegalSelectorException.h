#ifndef _java_nio_channels_IllegalSelectorException_h_
#define _java_nio_channels_IllegalSelectorException_h_
//$ class java.nio.channels.IllegalSelectorException
//$ extends java.lang.IllegalArgumentException

#include <java/lang/IllegalArgumentException.h>

namespace java {
	namespace nio {
		namespace channels {

class $import IllegalSelectorException : public ::java::lang::IllegalArgumentException {
	$class(IllegalSelectorException, $NO_CLASS_INIT, ::java::lang::IllegalArgumentException)
public:
	IllegalSelectorException();
	void init$();
	static const int64_t serialVersionUID = (int64_t)0x8B56BD744BE4A2E5;
	IllegalSelectorException(const IllegalSelectorException& e);
	virtual void throw$() override;
	inline IllegalSelectorException* operator ->() {
		return (IllegalSelectorException*)throwing$;
	}
};

		} // channels
	} // nio
} // java

#endif // _java_nio_channels_IllegalSelectorException_h_