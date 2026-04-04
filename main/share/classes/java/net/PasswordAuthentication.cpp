#include <java/net/PasswordAuthentication.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace net {

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
	$FieldInfo fieldInfos$$[] = {
		{"userName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(PasswordAuthentication, userName)},
		{"password", "[C", nullptr, $PRIVATE, $field(PasswordAuthentication, password)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;[C)V", nullptr, $PUBLIC, $method(PasswordAuthentication, init$, void, $String*, $chars*)},
		{"getPassword", "()[C", nullptr, $PUBLIC, $method(PasswordAuthentication, getPassword, $chars*)},
		{"getUserName", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(PasswordAuthentication, getUserName, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"java.net.PasswordAuthentication",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(PasswordAuthentication, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PasswordAuthentication);
	});
	return class$;
}

$Class* PasswordAuthentication::class$ = nullptr;

	} // net
} // java