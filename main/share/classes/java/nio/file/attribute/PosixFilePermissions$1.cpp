#include <java/nio/file/attribute/PosixFilePermissions$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/file/attribute/PosixFilePermissions.h>
#include <java/util/Collections.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileAttribute = ::java::nio::file::attribute::FileAttribute;
using $PosixFilePermissions = ::java::nio::file::attribute::PosixFilePermissions;
using $Collections = ::java::util::Collections;
using $Set = ::java::util::Set;

namespace java {
	namespace nio {
		namespace file {
			namespace attribute {

$FieldInfo _PosixFilePermissions$1_FieldInfo_[] = {
	{"val$value", "Ljava/util/Set;", nullptr, $FINAL | $SYNTHETIC, $field(PosixFilePermissions$1, val$value)},
	{}
};

$MethodInfo _PosixFilePermissions$1_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Set;)V", nullptr, 0, $method(static_cast<void(PosixFilePermissions$1::*)($Set*)>(&PosixFilePermissions$1::init$))},
	{"name", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"value", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/nio/file/attribute/PosixFilePermission;>;", $PUBLIC},
	{}
};

$EnclosingMethodInfo _PosixFilePermissions$1_EnclosingMethodInfo_ = {
	"java.nio.file.attribute.PosixFilePermissions",
	"asFileAttribute",
	"(Ljava/util/Set;)Ljava/nio/file/attribute/FileAttribute;"
};

$InnerClassInfo _PosixFilePermissions$1_InnerClassesInfo_[] = {
	{"java.nio.file.attribute.PosixFilePermissions$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _PosixFilePermissions$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.nio.file.attribute.PosixFilePermissions$1",
	"java.lang.Object",
	"java.nio.file.attribute.FileAttribute",
	_PosixFilePermissions$1_FieldInfo_,
	_PosixFilePermissions$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/nio/file/attribute/FileAttribute<Ljava/util/Set<Ljava/nio/file/attribute/PosixFilePermission;>;>;",
	&_PosixFilePermissions$1_EnclosingMethodInfo_,
	_PosixFilePermissions$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.nio.file.attribute.PosixFilePermissions"
};

$Object* allocate$PosixFilePermissions$1($Class* clazz) {
	return $of($alloc(PosixFilePermissions$1));
}

void PosixFilePermissions$1::init$($Set* val$value) {
	$set(this, val$value, val$value);
}

$String* PosixFilePermissions$1::name() {
	return "posix:permissions"_s;
}

$Object* PosixFilePermissions$1::value() {
	return $of($Collections::unmodifiableSet(this->val$value));
}

PosixFilePermissions$1::PosixFilePermissions$1() {
}

$Class* PosixFilePermissions$1::load$($String* name, bool initialize) {
	$loadClass(PosixFilePermissions$1, name, initialize, &_PosixFilePermissions$1_ClassInfo_, allocate$PosixFilePermissions$1);
	return class$;
}

$Class* PosixFilePermissions$1::class$ = nullptr;

			} // attribute
		} // file
	} // nio
} // java