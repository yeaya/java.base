#include <sun/security/action/OpenFileInputStreamAction.h>

#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $FileInputStream = ::java::io::FileInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;

namespace sun {
	namespace security {
		namespace action {

$FieldInfo _OpenFileInputStreamAction_FieldInfo_[] = {
	{"file", "Ljava/io/File;", nullptr, $PRIVATE | $FINAL, $field(OpenFileInputStreamAction, file)},
	{}
};

$MethodInfo _OpenFileInputStreamAction_MethodInfo_[] = {
	{"<init>", "(Ljava/io/File;)V", nullptr, $PUBLIC, $method(static_cast<void(OpenFileInputStreamAction::*)($File*)>(&OpenFileInputStreamAction::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(OpenFileInputStreamAction::*)($String*)>(&OpenFileInputStreamAction::init$))},
	{"run", "()Ljava/io/FileInputStream;", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{}
};

$ClassInfo _OpenFileInputStreamAction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.action.OpenFileInputStreamAction",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	_OpenFileInputStreamAction_FieldInfo_,
	_OpenFileInputStreamAction_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/io/FileInputStream;>;"
};

$Object* allocate$OpenFileInputStreamAction($Class* clazz) {
	return $of($alloc(OpenFileInputStreamAction));
}

void OpenFileInputStreamAction::init$($File* file) {
	$set(this, file, file);
}

void OpenFileInputStreamAction::init$($String* filename) {
	$set(this, file, $new($File, filename));
}

$Object* OpenFileInputStreamAction::run() {
	return $of($new($FileInputStream, this->file));
}

OpenFileInputStreamAction::OpenFileInputStreamAction() {
}

$Class* OpenFileInputStreamAction::load$($String* name, bool initialize) {
	$loadClass(OpenFileInputStreamAction, name, initialize, &_OpenFileInputStreamAction_ClassInfo_, allocate$OpenFileInputStreamAction);
	return class$;
}

$Class* OpenFileInputStreamAction::class$ = nullptr;

		} // action
	} // security
} // sun