#include <pkg/subpkg/C4pkg.h>

#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $Set = ::java::util::Set;

namespace pkg {
	namespace subpkg {

$MethodInfo _C4pkg_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(C4pkg::*)()>(&C4pkg::init$))},
	{"inaccessibleFields", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $PUBLIC | $STATIC, $method(static_cast<$Set*(*)()>(&C4pkg::inaccessibleFields))},
	{"lookup", "()Ljava/lang/invoke/MethodHandles$Lookup;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MethodHandles$Lookup*(*)()>(&C4pkg::lookup))},
	{}
};

$ClassInfo _C4pkg_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"pkg.subpkg.C4pkg",
	"java.lang.Object",
	nullptr,
	nullptr,
	_C4pkg_MethodInfo_
};

$Object* allocate$C4pkg($Class* clazz) {
	return $of($alloc(C4pkg));
}

void C4pkg::init$() {
}

$MethodHandles$Lookup* C4pkg::lookup() {
	$load(C4pkg);
	$beforeCallerSensitive();
	return $MethodHandles::lookup();
}

$Set* C4pkg::inaccessibleFields() {
	return $Set::of($$new($StringArray, {
		"f_private"_s,
		"f_private_final"_s,
		"f_protected"_s,
		"f_protected_final"_s,
		"f_package"_s,
		"f_package_final"_s,
		"f_private_static"_s,
		"f_private_static_final"_s,
		"f_protected_static"_s,
		"f_protected_static_final"_s,
		"f_package_static"_s,
		"f_package_static_final"_s
	}));
}

C4pkg::C4pkg() {
}

$Class* C4pkg::load$($String* name, bool initialize) {
	$loadClass(C4pkg, name, initialize, &_C4pkg_ClassInfo_, allocate$C4pkg);
	return class$;
}

$Class* C4pkg::class$ = nullptr;

	} // subpkg
} // pkg