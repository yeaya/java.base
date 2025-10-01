#include <pkg/A4pkg.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $Set = ::java::util::Set;

namespace pkg {

$FieldInfo _A4pkg_FieldInfo_[] = {
	{"f_public_static", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC, $staticField(A4pkg, f_public_static)},
	{"f_protected_static", "Ljava/lang/Object;", nullptr, $PROTECTED | $STATIC, $staticField(A4pkg, f_protected_static)},
	{"f_package_static", "Ljava/lang/Object;", nullptr, $STATIC, $staticField(A4pkg, f_package_static)},
	{"f_private_static", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $staticField(A4pkg, f_private_static)},
	{"f_public_static_final", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(A4pkg, f_public_static_final)},
	{"f_protected_static_final", "Ljava/lang/Object;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(A4pkg, f_protected_static_final)},
	{"f_package_static_final", "Ljava/lang/Object;", nullptr, $STATIC | $FINAL, $staticField(A4pkg, f_package_static_final)},
	{"f_private_static_final", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(A4pkg, f_private_static_final)},
	{"f_public", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(A4pkg, f_public)},
	{"f_protected", "Ljava/lang/Object;", nullptr, $PROTECTED, $field(A4pkg, f_protected)},
	{"f_package", "Ljava/lang/Object;", nullptr, 0, $field(A4pkg, f_package)},
	{"f_private", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(A4pkg, f_private)},
	{"f_public_final", "Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL, $field(A4pkg, f_public_final)},
	{"f_protected_final", "Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $field(A4pkg, f_protected_final)},
	{"f_package_final", "Ljava/lang/Object;", nullptr, $FINAL, $field(A4pkg, f_package_final)},
	{"f_private_final", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(A4pkg, f_private_final)},
	{}
};

$MethodInfo _A4pkg_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(A4pkg::*)()>(&A4pkg::init$))},
	{"inaccessibleFields", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $PUBLIC | $STATIC, $method(static_cast<$Set*(*)()>(&A4pkg::inaccessibleFields))},
	{"lookup", "()Ljava/lang/invoke/MethodHandles$Lookup;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MethodHandles$Lookup*(*)()>(&A4pkg::lookup))},
	{}
};

$ClassInfo _A4pkg_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"pkg.A4pkg",
	"java.lang.Object",
	nullptr,
	_A4pkg_FieldInfo_,
	_A4pkg_MethodInfo_
};

$Object* allocate$A4pkg($Class* clazz) {
	return $of($alloc(A4pkg));
}

$Object* A4pkg::f_public_static = nullptr;
$Object* A4pkg::f_protected_static = nullptr;
$Object* A4pkg::f_package_static = nullptr;
$Object* A4pkg::f_private_static = nullptr;
$Object* A4pkg::f_public_static_final = nullptr;
$Object* A4pkg::f_protected_static_final = nullptr;
$Object* A4pkg::f_package_static_final = nullptr;
$Object* A4pkg::f_private_static_final = nullptr;

void A4pkg::init$() {
	$set(this, f_public_final, nullptr);
	$set(this, f_protected_final, nullptr);
	$set(this, f_package_final, nullptr);
	$set(this, f_private_final, nullptr);
}

$MethodHandles$Lookup* A4pkg::lookup() {
	$init(A4pkg);
	$beforeCallerSensitive();
	return $MethodHandles::lookup();
}

$Set* A4pkg::inaccessibleFields() {
	$init(A4pkg);
	return $Set::of();
}

void clinit$A4pkg($Class* class$) {
	$assignStatic(A4pkg::f_public_static_final, nullptr);
	$assignStatic(A4pkg::f_protected_static_final, nullptr);
	$assignStatic(A4pkg::f_package_static_final, nullptr);
	$assignStatic(A4pkg::f_private_static_final, nullptr);
}

A4pkg::A4pkg() {
}

$Class* A4pkg::load$($String* name, bool initialize) {
	$loadClass(A4pkg, name, initialize, &_A4pkg_ClassInfo_, clinit$A4pkg, allocate$A4pkg);
	return class$;
}

$Class* A4pkg::class$ = nullptr;

} // pkg