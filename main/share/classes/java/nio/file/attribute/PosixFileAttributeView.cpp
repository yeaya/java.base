#include <java/nio/file/attribute/PosixFileAttributeView.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/file/attribute/BasicFileAttributeView.h>
#include <java/nio/file/attribute/GroupPrincipal.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicFileAttributeView = ::java::nio::file::attribute::BasicFileAttributeView;
using $FileOwnerAttributeView = ::java::nio::file::attribute::FileOwnerAttributeView;
using $GroupPrincipal = ::java::nio::file::attribute::GroupPrincipal;
using $Set = ::java::util::Set;

namespace java {
	namespace nio {
		namespace file {
			namespace attribute {

$MethodInfo _PosixFileAttributeView_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"name", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"readAttributes", "()Ljava/nio/file/attribute/BasicFileAttributes;", nullptr, $PUBLIC | $ABSTRACT},
	{"setGroup", "(Ljava/nio/file/attribute/GroupPrincipal;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"setPermissions", "(Ljava/util/Set;)V", "(Ljava/util/Set<Ljava/nio/file/attribute/PosixFilePermission;>;)V", $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _PosixFileAttributeView_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.nio.file.attribute.PosixFileAttributeView",
	nullptr,
	"java.nio.file.attribute.BasicFileAttributeView,java.nio.file.attribute.FileOwnerAttributeView",
	nullptr,
	_PosixFileAttributeView_MethodInfo_
};

$Object* allocate$PosixFileAttributeView($Class* clazz) {
	return $of($alloc(PosixFileAttributeView));
}

int32_t PosixFileAttributeView::hashCode() {
	 return this->$BasicFileAttributeView::hashCode();
}

bool PosixFileAttributeView::equals(Object$* obj) {
	 return this->$BasicFileAttributeView::equals(obj);
}

$Object* PosixFileAttributeView::clone() {
	 return this->$BasicFileAttributeView::clone();
}

$String* PosixFileAttributeView::toString() {
	 return this->$BasicFileAttributeView::toString();
}

void PosixFileAttributeView::finalize() {
	this->$BasicFileAttributeView::finalize();
}

$Class* PosixFileAttributeView::load$($String* name, bool initialize) {
	$loadClass(PosixFileAttributeView, name, initialize, &_PosixFileAttributeView_ClassInfo_, allocate$PosixFileAttributeView);
	return class$;
}

$Class* PosixFileAttributeView::class$ = nullptr;

			} // attribute
		} // file
	} // nio
} // java