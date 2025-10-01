#include <java/net/PasswordAuthentication.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace net {

$FieldInfo _PasswordAuthentication_FieldInfo_[] = {
	{"userName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(PasswordAuthentication, userName)},
	{"password", "[C", nullptr, $PRIVATE, $field(PasswordAuthentication, password)},
	{}
};

$MethodInfo _PasswordAuthentication_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;[C)V", nullptr, $PUBLIC, $method(static_cast<void(PasswordAuthentication::*)($String*,$chars*)>(&PasswordAuthentication::init$))},
	{"getPassword", "()[C", nullptr, $PUBLIC, $method(static_cast<$chars*(PasswordAuthentication::*)()>(&PasswordAuthentication::getPassword))},
	{"getUserName", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(PasswordAuthentication::*)()>(&PasswordAuthentication::getUserName))},
	{}
};

$ClassInfo _PasswordAuthentication_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.net.PasswordAuthentication",
	"java.lang.Object",
	nullptr,
	_PasswordAuthentication_FieldInfo_,
	_PasswordAuthentication_MethodInfo_
};

$Object* allocate$PasswordAuthentication($Class* clazz) {
	return $of($alloc(PasswordAuthentication));
}

void PasswordAuthentication::init$($String* userName, $chars* password) {
	$set(this, userName, userName);
	$set(this, password, $cast($chars, $nc(password)->clone()));
}

$String* PasswordAuthentication::getUserName() {
	return this->userName;
}

$chars* PasswordAuthentication::getPassword() {
	return this->password;
}

PasswordAuthentication::PasswordAuthentication() {
}

$Class* PasswordAuthentication::load$($String* name, bool initialize) {
	$loadClass(PasswordAuthentication, name, initialize, &_PasswordAuthentication_ClassInfo_, allocate$PasswordAuthentication);
	return class$;
}

$Class* PasswordAuthentication::class$ = nullptr;

	} // net
} // java