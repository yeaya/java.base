#include <MyPrincipal.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;

$FieldInfo _MyPrincipal_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE, $field(MyPrincipal, name)},
	{}
};

$MethodInfo _MyPrincipal_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(MyPrincipal, init$, void, $String*)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(MyPrincipal, equals, bool, Object$*)},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MyPrincipal, getName, $String*)},
	{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(MyPrincipal, hashCode, int32_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MyPrincipal, toString, $String*)},
	{}
};

$ClassInfo _MyPrincipal_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"MyPrincipal",
	"java.lang.Object",
	"java.security.Principal",
	_MyPrincipal_FieldInfo_,
	_MyPrincipal_MethodInfo_
};

$Object* allocate$MyPrincipal($Class* clazz) {
	return $of($alloc(MyPrincipal));
}

void MyPrincipal::init$($String* name) {
	if (name == nullptr) {
		$throwNew($NullPointerException, "illegal null input"_s);
	}
	$set(this, name, name);
}

$String* MyPrincipal::getName() {
	return this->name;
}

$String* MyPrincipal::toString() {
	return ($str({"MyPrincipal:  "_s, this->name}));
}

bool MyPrincipal::equals(Object$* o) {
	$useLocalCurrentObjectStackCache();
	if (o == nullptr) {
		return false;
	}
	if ($equals(this, o)) {
		return true;
	}
	if (!($instanceOf(MyPrincipal, o))) {
		return false;
	}
	$var(MyPrincipal, that, $cast(MyPrincipal, o));
	if ($nc($(this->getName()))->equals($($nc(that)->getName()))) {
		return true;
	}
	return false;
}

int32_t MyPrincipal::hashCode() {
	return $nc(this->name)->hashCode();
}

MyPrincipal::MyPrincipal() {
}

$Class* MyPrincipal::load$($String* name, bool initialize) {
	$loadClass(MyPrincipal, name, initialize, &_MyPrincipal_ClassInfo_, allocate$MyPrincipal);
	return class$;
}

$Class* MyPrincipal::class$ = nullptr;