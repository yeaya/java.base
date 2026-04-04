#include <java/lang/ProcessImpl$2.h>
#include <java/io/BufferedInputStream.h>
#include <java/io/BufferedOutputStream.h>
#include <java/io/FileDescriptor.h>
#include <java/io/FileOutputStream.h>
#include <java/lang/Process$PipeInputStream.h>
#include <java/lang/ProcessBuilder$NullInputStream.h>
#include <java/lang/ProcessBuilder$NullOutputStream.h>
#include <java/lang/ProcessImpl.h>
#include <jdk/internal/access/JavaIOFileDescriptorAccess.h>
#include <jcpp.h>

#undef INSTANCE

using $BufferedInputStream = ::java::io::BufferedInputStream;
using $BufferedOutputStream = ::java::io::BufferedOutputStream;
using $FileDescriptor = ::java::io::FileDescriptor;
using $FileOutputStream = ::java::io::FileOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Process$PipeInputStream = ::java::lang::Process$PipeInputStream;
using $ProcessBuilder$NullInputStream = ::java::lang::ProcessBuilder$NullInputStream;
using $ProcessBuilder$NullOutputStream = ::java::lang::ProcessBuilder$NullOutputStream;
using $ProcessImpl = ::java::lang::ProcessImpl;

namespace java {
	namespace lang {

void ProcessImpl$2::init$($ProcessImpl* this$0, $longs* val$stdHandles, bool val$forceNullOutputStream) {
	$set(this, this$0, this$0);
	$set(this, val$stdHandles, val$stdHandles);
	this->val$forceNullOutputStream = val$forceNullOutputStream;
}

$Object* ProcessImpl$2::run() {
	$useLocalObjectStack();
	if ($nc(this->val$stdHandles)->get(0) == -1) {
		$init($ProcessBuilder$NullOutputStream);
		$set(this->this$0, stdin_stream, $ProcessBuilder$NullOutputStream::INSTANCE);
	} else {
		$var($FileDescriptor, stdin_fd, $new($FileDescriptor));
		$init($ProcessImpl);
		$nc($ProcessImpl::fdAccess)->setHandle(stdin_fd, this->val$stdHandles->get(0));
		$ProcessImpl::fdAccess->registerCleanup(stdin_fd);
		$set(this->this$0, stdin_stream, $new($BufferedOutputStream, $$new($FileOutputStream, stdin_fd)));
	}
	if (this->val$stdHandles->get(1) == -1 || this->val$forceNullOutputStream) {
		$init($ProcessBuilder$NullInputStream);
		$set(this->this$0, stdout_stream, $ProcessBuilder$NullInputStream::INSTANCE);
	} else {
		$var($FileDescriptor, stdout_fd, $new($FileDescriptor));
		$init($ProcessImpl);
		$nc($ProcessImpl::fdAccess)->setHandle(stdout_fd, this->val$stdHandles->get(1));
		$ProcessImpl::fdAccess->registerCleanup(stdout_fd);
		$set(this->this$0, stdout_stream, $new($BufferedInputStream, $$new($Process$PipeInputStream, stdout_fd)));
	}
	if (this->val$stdHandles->get(2) == -1) {
		$init($ProcessBuilder$NullInputStream);
		$set(this->this$0, stderr_stream, $ProcessBuilder$NullInputStream::INSTANCE);
	} else {
		$var($FileDescriptor, stderr_fd, $new($FileDescriptor));
		$init($ProcessImpl);
		$nc($ProcessImpl::fdAccess)->setHandle(stderr_fd, this->val$stdHandles->get(2));
		$ProcessImpl::fdAccess->registerCleanup(stderr_fd);
		$set(this->this$0, stderr_stream, $new($Process$PipeInputStream, stderr_fd));
	}
	return nullptr;
}

ProcessImpl$2::ProcessImpl$2() {
}

$Class* ProcessImpl$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/lang/ProcessImpl;", nullptr, $FINAL | $SYNTHETIC, $field(ProcessImpl$2, this$0)},
		{"val$forceNullOutputStream", "Z", nullptr, $FINAL | $SYNTHETIC, $field(ProcessImpl$2, val$forceNullOutputStream)},
		{"val$stdHandles", "[J", nullptr, $FINAL | $SYNTHETIC, $field(ProcessImpl$2, val$stdHandles)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/ProcessImpl;[JZ)V", "()V", 0, $method(ProcessImpl$2, init$, void, $ProcessImpl*, $longs*, bool)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(ProcessImpl$2, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.lang.ProcessImpl",
		"<init>",
		"([Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[JZZ)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.ProcessImpl$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.ProcessImpl$2",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.ProcessImpl"
	};
	$loadClass(ProcessImpl$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ProcessImpl$2);
	});
	return class$;
}

$Class* ProcessImpl$2::class$ = nullptr;

	} // lang
} // java