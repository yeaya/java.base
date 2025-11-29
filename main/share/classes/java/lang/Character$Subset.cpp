#include <java/lang/Character$Subset.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;

namespace java {
	namespace lang {

$FieldInfo _Character$Subset_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Character$Subset, name)},
	{}
};

$MethodInfo _Character$Subset_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $method(static_cast<void(Character$Subset::*)($String*)>(&Character$Subset::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _Character$Subset_InnerClassesInfo_[] = {
	{"java.lang.Character$Subset", "java.lang.Character", "Subset", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Character$Subset_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.Character$Subset",
	"java.lang.Object",
	nullptr,
	_Character$Subset_FieldInfo_,
	_Character$Subset_MethodInfo_,
	nullptr,
	nullptr,
	_Character$Subset_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.Character"
};

$Object* allocate$Character$Subset($Class* clazz) {
	return $of($alloc(Character$Subset));
}

void Character$Subset::init$($String* name) {
	if (name == nullptr) {
		$throwNew($NullPointerException, "name"_s);
	}
	$set(this, name, name);
}

bool Character$Subset::equals(Object$* obj) {
	return ($equals(this, obj));
}

int32_t Character$Subset::hashCode() {
	return $Object::hashCode();
}

$String* Character$Subset::toString() {
	return this->name;
}

Character$Subset::Character$Subset() {
}

$Class* Character$Subset::load$($String* name, bool initialize) {
	$loadClass(Character$Subset, name, initialize, &_Character$Subset_ClassInfo_, allocate$Character$Subset);
	return class$;
}

$Class* Character$Subset::class$ = nullptr;

	} // lang
} // java