#ifndef _LocalizedMessage$LocalizedException_h_
#define _LocalizedMessage$LocalizedException_h_
//$ class LocalizedMessage$LocalizedException
//$ extends java.lang.Throwable

#include <java/lang/Throwable.h>

class $export LocalizedMessage$LocalizedException : public ::java::lang::Throwable {
	$class(LocalizedMessage$LocalizedException, $NO_CLASS_INIT, ::java::lang::Throwable)
public:
	LocalizedMessage$LocalizedException();
	void init$();
	virtual $String* getLocalizedMessage() override;
	bool localizedMessageCalled = false;
	LocalizedMessage$LocalizedException(const LocalizedMessage$LocalizedException& e);
	LocalizedMessage$LocalizedException wrapper$();
	virtual void throwWrapper$() override;
};

#endif // _LocalizedMessage$LocalizedException_h_