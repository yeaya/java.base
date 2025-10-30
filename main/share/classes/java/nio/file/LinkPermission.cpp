#include <java/nio/file/LinkPermission.h>

#include <java/security/BasicPermission.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicPermission = ::java::security::BasicPermission;

namespace java {
	namespace nio {
		namespace file {

$FieldInfo _LinkPermission_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(LinkPermission, serialVersionUID)},
	{}
};

$MethodInfo _LinkPermission_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(LinkPermission::*)($String*)>(&LinkPermission::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(LinkPermission::*)($String*,$String*)>(&LinkPermission::init$))},
	{"checkName", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(LinkPermission::*)($String*)>(&LinkPermission::checkName))},
	{}
};

$ClassInfo _LinkPermission_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.nio.file.LinkPermission",
	"java.security.BasicPermission",
	nullptr,
	_LinkPermission_FieldInfo_,
	_LinkPermission_MethodInfo_
};

$Object* allocate$LinkPermission($Class* clazz) {
	return $of($alloc(LinkPermission));
}

void LinkPermission::checkName($String* name) {
	bool var$0 = !$nc(name)->equals("hard"_s);
	if (var$0 && !name->equals("symbolic"_s)) {
		$throwNew($IllegalArgumentException, $$str({"name: "_s, name}));
	}
}

void LinkPermission::init$($String* name) {
	$BasicPermission::init$(name);
	checkName(name);
}

void LinkPermission::init$($String* name, $String* actions) {
	$BasicPermission::init$(name);
	checkName(name);
	if (actions != nullptr && !actions->isEmpty()) {
		$throwNew($IllegalArgumentException, $$str({"actions: "_s, actions}));
	}
}

LinkPermission::LinkPermission() {
}

$Class* LinkPermission::load$($String* name, bool initialize) {
	$loadClass(LinkPermission, name, initialize, &_LinkPermission_ClassInfo_, allocate$LinkPermission);
	return class$;
}

$Class* LinkPermission::class$ = nullptr;

		} // file
	} // nio
} // java