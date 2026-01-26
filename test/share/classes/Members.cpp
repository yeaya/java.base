#include <Members.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _Members_FieldInfo_[] = {
	{"publicField", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Members, publicField)},
	{"protectedField", "Ljava/lang/Object;", nullptr, $PROTECTED, $field(Members, protectedField)},
	{"privateField", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(Members, privateField)},
	{"publicFinalField", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Members, publicFinalField)},
	{"privateFinalField", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Members, privateFinalField)},
	{"publicStaticFinalField", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Members, publicStaticFinalField)},
	{"privateStaticFinalField", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Members, privateStaticFinalField)},
	{}
};

$MethodInfo _Members_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Members, init$, void)},
	{"<init>", "(Z)V", nullptr, $PROTECTED, $method(Members, init$, void, bool)},
	{"<init>", "(I)V", nullptr, $PRIVATE, $method(Members, init$, void, int32_t)},
	{"privateMethod", "()V", nullptr, $PRIVATE, $method(Members, privateMethod, void)},
	{"protectedMethod", "()V", nullptr, $PROTECTED, $virtualMethod(Members, protectedMethod, void)},
	{"publicMethod", "()V", nullptr, $PUBLIC, $virtualMethod(Members, publicMethod, void)},
	{}
};

$ClassInfo _Members_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Members",
	"java.lang.Object",
	nullptr,
	_Members_FieldInfo_,
	_Members_MethodInfo_
};

$Object* allocate$Members($Class* clazz) {
	return $of($alloc(Members));
}

void Members::init$() {
	$set(this, publicField, $new($Object));
	$set(this, protectedField, $new($Object));
	$set(this, privateField, $new($Object));
}

void Members::init$(bool b) {
	$set(this, publicField, $new($Object));
	$set(this, protectedField, $new($Object));
	$set(this, privateField, $new($Object));
}

void Members::init$(int32_t i) {
	$set(this, publicField, $new($Object));
	$set(this, protectedField, $new($Object));
	$set(this, privateField, $new($Object));
}

void Members::publicMethod() {
}

void Members::protectedMethod() {
}

void Members::privateMethod() {
}

Members::Members() {
}

$Class* Members::load$($String* name, bool initialize) {
	$loadClass(Members, name, initialize, &_Members_ClassInfo_, allocate$Members);
	return class$;
}

$Class* Members::class$ = nullptr;