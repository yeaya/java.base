#include <NullArgs.h>

#include <java/io/File.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;

$MethodInfo _NullArgs_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NullArgs::*)()>(&NullArgs::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&NullArgs::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _NullArgs_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"NullArgs",
	"java.lang.Object",
	nullptr,
	nullptr,
	_NullArgs_MethodInfo_
};

$Object* allocate$NullArgs($Class* clazz) {
	return $of($alloc(NullArgs));
}

void NullArgs::init$() {
}

void NullArgs::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0;; ++i) {
		try {
			switch (i) {
			case 0:
				{
					$new($File, ($String*)nullptr);
					break;
				}
			case 1:
				{
					$new($File, ($String*)nullptr, ($String*)nullptr);
					break;
				}
			case 2:
				{
					$new($File, ($File*)nullptr, ($String*)nullptr);
					break;
				}
			case 3:
				{
					$File::createTempFile(nullptr, nullptr, nullptr);
					break;
				}
			case 4:
				{
					$File::createTempFile(nullptr, nullptr);
					break;
				}
			case 5:
				{
					$$new($File, "foo"_s)->compareTo(($File*)nullptr);
					break;
				}
			case 6:
				{
					$$new($File, "foo"_s)->renameTo(nullptr);
					break;
				}
			default:
				{
					$init($System);
					$nc($System::err)->println();
					return;
				}
			}
		} catch ($NullPointerException&) {
			$var($NullPointerException, x, $catch());
			$init($System);
			$nc($System::err)->print($$str({$$str(i), " "_s}));
			continue;
		}
		$throwNew($Exception, $$str({"NullPointerException not thrown (case "_s, $$str(i), ")"_s}));
	}
}

NullArgs::NullArgs() {
}

$Class* NullArgs::load$($String* name, bool initialize) {
	$loadClass(NullArgs, name, initialize, &_NullArgs_ClassInfo_, allocate$NullArgs);
	return class$;
}

$Class* NullArgs::class$ = nullptr;