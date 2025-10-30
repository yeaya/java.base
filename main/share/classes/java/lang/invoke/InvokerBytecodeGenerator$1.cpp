#include <java/lang/invoke/InvokerBytecodeGenerator$1.h>

#include <java/io/File.h>
#include <java/io/FileOutputStream.h>
#include <java/io/IOException.h>
#include <java/lang/InternalError.h>
#include <java/lang/invoke/InvokerBytecodeGenerator.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <jcpp.h>

#undef DUMP_CLASS_FILES_DIR

using $File = ::java::io::File;
using $FileOutputStream = ::java::io::FileOutputStream;
using $IOException = ::java::io::IOException;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $InvokerBytecodeGenerator = ::java::lang::invoke::InvokerBytecodeGenerator;
using $MethodHandleStatics = ::java::lang::invoke::MethodHandleStatics;
using $PrivilegedAction = ::java::security::PrivilegedAction;

namespace java {
	namespace lang {
		namespace invoke {

$FieldInfo _InvokerBytecodeGenerator$1_FieldInfo_[] = {
	{"val$classFile", "[B", nullptr, $FINAL | $SYNTHETIC, $field(InvokerBytecodeGenerator$1, val$classFile)},
	{"val$className", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(InvokerBytecodeGenerator$1, val$className)},
	{}
};

$MethodInfo _InvokerBytecodeGenerator$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;[B)V", nullptr, 0, $method(static_cast<void(InvokerBytecodeGenerator$1::*)($String*,$bytes*)>(&InvokerBytecodeGenerator$1::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _InvokerBytecodeGenerator$1_EnclosingMethodInfo_ = {
	"java.lang.invoke.InvokerBytecodeGenerator",
	"maybeDump",
	"(Ljava/lang/String;[B)V"
};

$InnerClassInfo _InvokerBytecodeGenerator$1_InnerClassesInfo_[] = {
	{"java.lang.invoke.InvokerBytecodeGenerator$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _InvokerBytecodeGenerator$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.invoke.InvokerBytecodeGenerator$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_InvokerBytecodeGenerator$1_FieldInfo_,
	_InvokerBytecodeGenerator$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
	&_InvokerBytecodeGenerator$1_EnclosingMethodInfo_,
	_InvokerBytecodeGenerator$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.InvokerBytecodeGenerator"
};

$Object* allocate$InvokerBytecodeGenerator$1($Class* clazz) {
	return $of($alloc(InvokerBytecodeGenerator$1));
}

void InvokerBytecodeGenerator$1::init$($String* val$className, $bytes* val$classFile) {
	$set(this, val$className, val$className);
	$set(this, val$classFile, val$classFile);
}

$Object* InvokerBytecodeGenerator$1::run() {
	$useLocalCurrentObjectStackCache();
	try {
		$var($String, dumpName, $nc(this->val$className)->replace(u'.', u'/'));
		$init($InvokerBytecodeGenerator);
		$var($File, dumpFile, $new($File, $InvokerBytecodeGenerator::DUMP_CLASS_FILES_DIR, $$str({dumpName, ".class"_s})));
		$nc($System::out)->println($$str({"dump: "_s, dumpFile}));
		$nc($(dumpFile->getParentFile()))->mkdirs();
		$var($FileOutputStream, file, $new($FileOutputStream, dumpFile));
		file->write(this->val$classFile);
		file->close();
		return $of(nullptr);
	} catch ($IOException& ex) {
		$throw($($MethodHandleStatics::newInternalError(static_cast<$Exception*>(ex))));
	}
	$shouldNotReachHere();
}

InvokerBytecodeGenerator$1::InvokerBytecodeGenerator$1() {
}

$Class* InvokerBytecodeGenerator$1::load$($String* name, bool initialize) {
	$loadClass(InvokerBytecodeGenerator$1, name, initialize, &_InvokerBytecodeGenerator$1_ClassInfo_, allocate$InvokerBytecodeGenerator$1);
	return class$;
}

$Class* InvokerBytecodeGenerator$1::class$ = nullptr;

		} // invoke
	} // lang
} // java