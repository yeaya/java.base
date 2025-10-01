#include <Members.h>

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
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Members::*)()>(&Members::init$))},
	{"<init>", "(Z)V", nullptr, $PROTECTED, $method(static_cast<void(Members::*)(bool)>(&Members::init$))},
	{"<init>", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(Members::*)(int32_t)>(&Members::init$))},
	{"privateMethod", "()V", nullptr, $PRIVATE, $method(static_cast<void(Members::*)()>(&Members::privateMethod))},
	{"protectedMethod", "()V", nullptr, $PROTECTED},
	{"publicMethod", "()V", nullptr, $PUBLIC},
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