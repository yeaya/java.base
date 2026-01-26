#include <java/lang/ProcessImpl$1.h>

#include <java/io/FileDescriptor.h>
#include <java/io/FileOutputStream.h>
#include <java/lang/ProcessImpl.h>
#include <jcpp.h>

using $FileDescriptor = ::java::io::FileDescriptor;
using $FileOutputStream = ::java::io::FileOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

$FieldInfo _ProcessImpl$1_FieldInfo_[] = {
	{"val$fd", "Ljava/io/FileDescriptor;", nullptr, $FINAL | $SYNTHETIC, $field(ProcessImpl$1, val$fd)},
	{}
};

$MethodInfo _ProcessImpl$1_MethodInfo_[] = {
	{"<init>", "(Ljava/io/FileDescriptor;)V", "()V", 0, $method(ProcessImpl$1, init$, void, $FileDescriptor*)},
	{"run", "()Ljava/io/FileOutputStream;", nullptr, $PUBLIC, $virtualMethod(ProcessImpl$1, run, $Object*)},
	{}
};

$EnclosingMethodInfo _ProcessImpl$1_EnclosingMethodInfo_ = {
	"java.lang.ProcessImpl",
	"newFileOutputStream",
	"(Ljava/io/File;Z)Ljava/io/FileOutputStream;"
};

$InnerClassInfo _ProcessImpl$1_InnerClassesInfo_[] = {
	{"java.lang.ProcessImpl$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ProcessImpl$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.ProcessImpl$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_ProcessImpl$1_FieldInfo_,
	_ProcessImpl$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/io/FileOutputStream;>;",
	&_ProcessImpl$1_EnclosingMethodInfo_,
	_ProcessImpl$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.ProcessImpl"
};

$Object* allocate$ProcessImpl$1($Class* clazz) {
	return $of($alloc(ProcessImpl$1));
}

void ProcessImpl$1::init$($FileDescriptor* val$fd) {
	$set(this, val$fd, val$fd);
}

$Object* ProcessImpl$1::run() {
	return $of($new($FileOutputStream, this->val$fd));
}

ProcessImpl$1::ProcessImpl$1() {
}

$Class* ProcessImpl$1::load$($String* name, bool initialize) {
	$loadClass(ProcessImpl$1, name, initialize, &_ProcessImpl$1_ClassInfo_, allocate$ProcessImpl$1);
	return class$;
}

$Class* ProcessImpl$1::class$ = nullptr;

	} // lang
} // java