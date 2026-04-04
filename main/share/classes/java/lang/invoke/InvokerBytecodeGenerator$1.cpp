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
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InvokerBytecodeGenerator = ::java::lang::invoke::InvokerBytecodeGenerator;
using $MethodHandleStatics = ::java::lang::invoke::MethodHandleStatics;

namespace java {
	namespace lang {
		namespace invoke {

void InvokerBytecodeGenerator$1::init$($String* val$className, $bytes* val$classFile) {
	$set(this, val$className, val$className);
	$set(this, val$classFile, val$classFile);
}

$Object* InvokerBytecodeGenerator$1::run() {
	$useLocalObjectStack();
	try {
		$var($String, dumpName, $nc(this->val$className)->replace(u'.', u'/'));
		$init($InvokerBytecodeGenerator);
		$var($File, dumpFile, $new($File, $InvokerBytecodeGenerator::DUMP_CLASS_FILES_DIR, $$str({dumpName, ".class"_s})));
		$nc($System::out)->println($$str({"dump: "_s, dumpFile}));
		$$nc(dumpFile->getParentFile())->mkdirs();
		$var($FileOutputStream, file, $new($FileOutputStream, dumpFile));
		file->write(this->val$classFile);
		file->close();
		return nullptr;
	} catch ($IOException& ex) {
		$throw($($MethodHandleStatics::newInternalError(ex)));
	}
	$shouldNotReachHere();
}

InvokerBytecodeGenerator$1::InvokerBytecodeGenerator$1() {
}

$Class* InvokerBytecodeGenerator$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$classFile", "[B", nullptr, $FINAL | $SYNTHETIC, $field(InvokerBytecodeGenerator$1, val$classFile)},
		{"val$className", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(InvokerBytecodeGenerator$1, val$className)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;[B)V", nullptr, 0, $method(InvokerBytecodeGenerator$1, init$, void, $String*, $bytes*)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(InvokerBytecodeGenerator$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.lang.invoke.InvokerBytecodeGenerator",
		"maybeDump",
		"(Ljava/lang/String;[B)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.InvokerBytecodeGenerator$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.invoke.InvokerBytecodeGenerator$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.invoke.InvokerBytecodeGenerator"
	};
	$loadClass(InvokerBytecodeGenerator$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InvokerBytecodeGenerator$1);
	});
	return class$;
}

$Class* InvokerBytecodeGenerator$1::class$ = nullptr;

		} // invoke
	} // lang
} // java