#include <java/nio/file/attribute/PosixFilePermissions$1.h>
#include <java/nio/file/attribute/PosixFilePermissions.h>
#include <java/util/Collections.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collections = ::java::util::Collections;
using $Set = ::java::util::Set;

namespace java {
	namespace nio {
		namespace file {
			namespace attribute {

void PosixFilePermissions$1::init$($Set* val$value) {
	$set(this, val$value, val$value);
}

$String* PosixFilePermissions$1::name() {
	return "posix:permissions"_s;
}

$Object* PosixFilePermissions$1::value() {
	return $Collections::unmodifiableSet(this->val$value);
}

PosixFilePermissions$1::PosixFilePermissions$1() {
}

$Class* PosixFilePermissions$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$value", "Ljava/util/Set;", nullptr, $FINAL | $SYNTHETIC, $field(PosixFilePermissions$1, val$value)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Set;)V", nullptr, 0, $method(PosixFilePermissions$1, init$, void, $Set*)},
		{"name", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(PosixFilePermissions$1, name, $String*)},
		{"value", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/nio/file/attribute/PosixFilePermission;>;", $PUBLIC, $virtualMethod(PosixFilePermissions$1, value, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.nio.file.attribute.PosixFilePermissions",
		"asFileAttribute",
		"(Ljava/util/Set;)Ljava/nio/file/attribute/FileAttribute;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.nio.file.attribute.PosixFilePermissions$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.nio.file.attribute.PosixFilePermissions$1",
		"java.lang.Object",
		"java.nio.file.attribute.FileAttribute",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/nio/file/attribute/FileAttribute<Ljava/util/Set<Ljava/nio/file/attribute/PosixFilePermission;>;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.nio.file.attribute.PosixFilePermissions"
	};
	$loadClass(PosixFilePermissions$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PosixFilePermissions$1);
	});
	return class$;
}

$Class* PosixFilePermissions$1::class$ = nullptr;

			} // attribute
		} // file
	} // nio
} // java