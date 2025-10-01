#ifndef _GetXSpace$DenyRead_h_
#define _GetXSpace$DenyRead_h_
//$ class GetXSpace$DenyRead
//$ extends GetXSpace$Deny

#include <GetXSpace$Deny.h>

class GetXSpace$DenyRead : public ::GetXSpace$Deny {
	$class(GetXSpace$DenyRead, $NO_CLASS_INIT, ::GetXSpace$Deny)
public:
	GetXSpace$DenyRead();
	using ::GetXSpace$Deny::checkRead;
	void init$();
	virtual void checkRead($String* file) override;
	$String* err = nullptr;
};

#endif // _GetXSpace$DenyRead_h_