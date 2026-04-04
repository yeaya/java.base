#include <sun/security/action/OpenFileInputStreamAction.h>
#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $FileInputStream = ::java::io::FileInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace action {

void OpenFileInputStreamAction::init$($File* file) {
	$set(this, file, file);
}

void OpenFileInputStreamAction::init$($String* filename) {
	$set(this, file, $new($File, filename));
}

$Object* OpenFileInputStreamAction::run() {
	return $new($FileInputStream, this->file);
}

OpenFileInputStreamAction::OpenFileInputStreamAction() {
}

$Class* OpenFileInputStreamAction::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"file", "Ljava/io/File;", nullptr, $PRIVATE | $FINAL, $field(OpenFileInputStreamAction, file)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/File;)V", nullptr, $PUBLIC, $method(OpenFileInputStreamAction, init$, void, $File*)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(OpenFileInputStreamAction, init$, void, $String*)},
		{"run", "()Ljava/io/FileInputStream;", nullptr, $PUBLIC, $virtualMethod(OpenFileInputStreamAction, run, $Object*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.action.OpenFileInputStreamAction",
		"java.lang.Object",
		"java.security.PrivilegedExceptionAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/io/FileInputStream;>;"
	};
	$loadClass(OpenFileInputStreamAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(OpenFileInputStreamAction);
	});
	return class$;
}

$Class* OpenFileInputStreamAction::class$ = nullptr;

		} // action
	} // security
} // sun