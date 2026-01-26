#include <test/java/lang/invoke/MethodHandleConstants.h>

#include <java/io/ByteArrayOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/lang/AssertionError.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/MethodType.h>
#include <java/security/Policy.h>
#include <java/util/Arrays.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <test/java/lang/invoke/MethodHandleConstants$TestPolicy.h>
#include <jcpp.h>

#undef EXPECT_OUTPUT
#undef TYPE

using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $PrintStream = ::java::io::PrintStream;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityManager = ::java::lang::SecurityManager;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Policy = ::java::security::Policy;
using $Arrays = ::java::util::Arrays;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $MethodHandleConstants$TestPolicy = ::test::java::lang::invoke::MethodHandleConstants$TestPolicy;

namespace test {
	namespace java {
		namespace lang {
			namespace invoke {

$FieldInfo _MethodHandleConstants_FieldInfo_[] = {
	{"oldOut", "Ljava/io/PrintStream;", nullptr, $PRIVATE | $STATIC, $staticField(MethodHandleConstants, oldOut)},
	{"buf", "Ljava/io/ByteArrayOutputStream;", nullptr, $PRIVATE | $STATIC, $staticField(MethodHandleConstants, buf)},
	{"EXPECT_OUTPUT", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MethodHandleConstants, EXPECT_OUTPUT)},
	{}
};

$MethodInfo _MethodHandleConstants_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(MethodHandleConstants, init$, void)},
	{"MH_Class_forName_S", "()Ljava/lang/invoke/MethodHandle;", nullptr, $PRIVATE | $STATIC, $staticMethod(MethodHandleConstants, MH_Class_forName_S, $MethodHandle*), "java.lang.ReflectiveOperationException"},
	{"MH_Class_forName_SbCL", "()Ljava/lang/invoke/MethodHandle;", nullptr, $PRIVATE | $STATIC, $staticMethod(MethodHandleConstants, MH_Class_forName_SbCL, $MethodHandle*), "java.lang.ReflectiveOperationException"},
	{"MH_MethodHandle_invokeExact_SC2", "()Ljava/lang/invoke/MethodHandle;", nullptr, $PRIVATE | $STATIC, $staticMethod(MethodHandleConstants, MH_MethodHandle_invokeExact_SC2, $MethodHandle*), "java.lang.ReflectiveOperationException"},
	{"MH_MethodHandle_invoke_SC2", "()Ljava/lang/invoke/MethodHandle;", nullptr, $PRIVATE | $STATIC, $staticMethod(MethodHandleConstants, MH_MethodHandle_invoke_SC2, $MethodHandle*), "java.lang.ReflectiveOperationException"},
	{"MH_String_replace_C2", "()Ljava/lang/invoke/MethodHandle;", nullptr, $PRIVATE | $STATIC, $staticMethod(MethodHandleConstants, MH_String_replace_C2, $MethodHandle*), "java.lang.ReflectiveOperationException"},
	{"MT_Class_forName_S", "()Ljava/lang/invoke/MethodType;", nullptr, $PRIVATE | $STATIC, $staticMethod(MethodHandleConstants, MT_Class_forName_S, $MethodType*)},
	{"MT_Class_forName_SbCL", "()Ljava/lang/invoke/MethodType;", nullptr, $PRIVATE | $STATIC, $staticMethod(MethodHandleConstants, MT_Class_forName_SbCL, $MethodType*)},
	{"MT_MethodHandle_invokeExact_SC2", "()Ljava/lang/invoke/MethodType;", nullptr, $PRIVATE | $STATIC, $staticMethod(MethodHandleConstants, MT_MethodHandle_invokeExact_SC2, $MethodType*)},
	{"MT_MethodHandle_invoke_SC2", "()Ljava/lang/invoke/MethodType;", nullptr, $PRIVATE | $STATIC, $staticMethod(MethodHandleConstants, MT_MethodHandle_invoke_SC2, $MethodType*)},
	{"MT_String_replace_C2", "()Ljava/lang/invoke/MethodType;", nullptr, $PRIVATE | $STATIC, $staticMethod(MethodHandleConstants, MT_String_replace_C2, $MethodType*)},
	{"assertEquals", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(MethodHandleConstants, assertEquals, void, Object$*, Object$*)},
	{"closeBuf", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(MethodHandleConstants, closeBuf, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $staticMethod(MethodHandleConstants, main, void, $StringArray*), "java.lang.Throwable"},
	{"openBuf", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(MethodHandleConstants, openBuf, void)},
	{"setSM", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(MethodHandleConstants, setSM, void)},
	{"shouldNotCallThis", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(MethodHandleConstants, shouldNotCallThis, void)},
	{"testCase", "(Ljava/lang/invoke/MethodHandle;Ljava/lang/Class;Ljava/lang/String;Ljava/lang/Class;[Ljava/lang/Class;)V", "(Ljava/lang/invoke/MethodHandle;Ljava/lang/Class<*>;Ljava/lang/String;Ljava/lang/Class<*>;[Ljava/lang/Class<*>;)V", $PRIVATE | $STATIC | $TRANSIENT, $staticMethod(MethodHandleConstants, testCase, void, $MethodHandle*, $Class*, $String*, $Class*, $ClassArray*), "java.lang.Throwable"},
	{}
};

$InnerClassInfo _MethodHandleConstants_InnerClassesInfo_[] = {
	{"test.java.lang.invoke.MethodHandleConstants$TestPolicy", "test.java.lang.invoke.MethodHandleConstants", "TestPolicy", $STATIC},
	{}
};

$ClassInfo _MethodHandleConstants_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"test.java.lang.invoke.MethodHandleConstants",
	"java.lang.Object",
	nullptr,
	_MethodHandleConstants_FieldInfo_,
	_MethodHandleConstants_MethodInfo_,
	nullptr,
	nullptr,
	_MethodHandleConstants_InnerClassesInfo_,
	nullptr,
	nullptr,
	"test.java.lang.invoke.MethodHandleConstants$TestPolicy"
};

$Object* allocate$MethodHandleConstants($Class* clazz) {
	return $of($alloc(MethodHandleConstants));
}

$PrintStream* MethodHandleConstants::oldOut = nullptr;
$ByteArrayOutputStream* MethodHandleConstants::buf = nullptr;
$StringArray* MethodHandleConstants::EXPECT_OUTPUT = nullptr;

void MethodHandleConstants::init$() {
}

void MethodHandleConstants::main($StringArray* av) {
	$init(MethodHandleConstants);
	$useLocalCurrentObjectStackCache();
	if ($nc(av)->length > 0 && $nc(av->get(0))->equals("--check-output"_s)) {
		openBuf();
	}
	if ($nc(av)->length > 0 && $nc(av->get(0))->equals("--security-manager"_s)) {
		setSM();
	}
	$nc($System::out)->println("Obtaining method handle constants:"_s);
	$init($Character);
	testCase($(MH_String_replace_C2()), $String::class$, "replace"_s, $String::class$, $$new($ClassArray, {
		$String::class$,
		$Character::TYPE,
		$Character::TYPE
	}));
	$load($MethodHandle);
	testCase($(MH_MethodHandle_invokeExact_SC2()), $MethodHandle::class$, "invokeExact"_s, $String::class$, $$new($ClassArray, {
		$MethodHandle::class$,
		$String::class$,
		$Character::TYPE,
		$Character::TYPE
	}));
	testCase($(MH_MethodHandle_invoke_SC2()), $MethodHandle::class$, "invoke"_s, $String::class$, $$new($ClassArray, {
		$MethodHandle::class$,
		$String::class$,
		$Character::TYPE,
		$Character::TYPE
	}));
	testCase($(MH_Class_forName_S()), $Class::class$, "forName"_s, $Class::class$, $$new($ClassArray, {$String::class$}));
	$init($Boolean);
	$load($ClassLoader);
	testCase($(MH_Class_forName_SbCL()), $Class::class$, "forName"_s, $Class::class$, $$new($ClassArray, {
		$String::class$,
		$Boolean::TYPE,
		$ClassLoader::class$
	}));
	$nc($System::out)->println("Done."_s);
	closeBuf();
}

void MethodHandleConstants::testCase($MethodHandle* mh, $Class* defc, $String* name, $Class* rtype, $ClassArray* ptypes) {
	$init(MethodHandleConstants);
	$useLocalCurrentObjectStackCache();
	$nc($System::out)->println($of(mh));
	$var($MethodType, mt, $MethodType::methodType(rtype, ptypes));
	assertEquals($($nc(mh)->type()), mt);
}

void MethodHandleConstants::assertEquals(Object$* exp, Object$* act) {
	$init(MethodHandleConstants);
	if ($equals(exp, act) || (exp != nullptr && $of(exp)->equals(act))) {
		return;
	}
	$throwNew($AssertionError, $of($$str({"not equal: "_s, exp, ", "_s, act})));
}

void MethodHandleConstants::setSM() {
	$init(MethodHandleConstants);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$Policy::setPolicy($$new($MethodHandleConstants$TestPolicy));
	$System::setSecurityManager($$new($SecurityManager));
}

void MethodHandleConstants::openBuf() {
	$init(MethodHandleConstants);
	$assignStatic(MethodHandleConstants::oldOut, $System::out);
	$assignStatic(MethodHandleConstants::buf, $new($ByteArrayOutputStream));
	$System::setOut($$new($PrintStream, static_cast<$OutputStream*>(MethodHandleConstants::buf)));
}

void MethodHandleConstants::closeBuf() {
	$init(MethodHandleConstants);
	$useLocalCurrentObjectStackCache();
	if (MethodHandleConstants::buf == nullptr) {
		return;
	}
	$nc($System::out)->flush();
	$System::setOut(MethodHandleConstants::oldOut);
	$var($StringArray, haveLines, $$new($String, $($nc(MethodHandleConstants::buf)->toByteArray()))->split("[\n\r]+"_s));
	{
		$var($StringArray, arr$, haveLines);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, line, arr$->get(i$));
			$nc($System::out)->println(line);
		}
	}
	$var($Iterator, iter, $nc($($Arrays::asList(haveLines)))->iterator());
	{
		$var($StringArray, arr$, MethodHandleConstants::EXPECT_OUTPUT);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, want, arr$->get(i$));
			{
				$var($String, have, $nc(iter)->hasNext() ? $cast($String, $nc(iter)->next()) : "[EOF]"_s);
				if ($nc(want)->equals(have)) {
					continue;
				}
				$nc($System::err)->println($$str({"want line: "_s, want}));
				$nc($System::err)->println($$str({"have line: "_s, have}));
				$throwNew($AssertionError, $of($$str({"unexpected output: "_s, have})));
			}
		}
	}
	if ($nc(iter)->hasNext()) {
		$throwNew($AssertionError, $of($$str({"unexpected output: "_s, $cast($String, $(iter->next()))})));
	}
}

$MethodType* MethodHandleConstants::MT_String_replace_C2() {
	$init(MethodHandleConstants);
	shouldNotCallThis();
	$init($Character);
	return $MethodType::methodType($String::class$, $Character::TYPE, $$new($ClassArray, {$Character::TYPE}));
}

$MethodHandle* MethodHandleConstants::MH_String_replace_C2() {
	$init(MethodHandleConstants);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	shouldNotCallThis();
	return $nc($($MethodHandles::lookup()))->findVirtual($String::class$, "replace"_s, $(MT_String_replace_C2()));
}

$MethodType* MethodHandleConstants::MT_MethodHandle_invokeExact_SC2() {
	$init(MethodHandleConstants);
	shouldNotCallThis();
	$init($Character);
	return $MethodType::methodType($String::class$, $String::class$, $$new($ClassArray, {
		$Character::TYPE,
		$Character::TYPE
	}));
}

$MethodHandle* MethodHandleConstants::MH_MethodHandle_invokeExact_SC2() {
	$init(MethodHandleConstants);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	shouldNotCallThis();
	$load($MethodHandle);
	return $nc($($MethodHandles::lookup()))->findVirtual($MethodHandle::class$, "invokeExact"_s, $(MT_MethodHandle_invokeExact_SC2()));
}

$MethodType* MethodHandleConstants::MT_MethodHandle_invoke_SC2() {
	$init(MethodHandleConstants);
	shouldNotCallThis();
	$init($Character);
	return $MethodType::methodType($String::class$, $String::class$, $$new($ClassArray, {
		$Character::TYPE,
		$Character::TYPE
	}));
}

$MethodHandle* MethodHandleConstants::MH_MethodHandle_invoke_SC2() {
	$init(MethodHandleConstants);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	shouldNotCallThis();
	$load($MethodHandle);
	return $nc($($MethodHandles::lookup()))->findVirtual($MethodHandle::class$, "invoke"_s, $(MT_MethodHandle_invoke_SC2()));
}

$MethodType* MethodHandleConstants::MT_Class_forName_S() {
	$init(MethodHandleConstants);
	shouldNotCallThis();
	return $MethodType::methodType($Class::class$, $String::class$);
}

$MethodHandle* MethodHandleConstants::MH_Class_forName_S() {
	$init(MethodHandleConstants);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	shouldNotCallThis();
	return $nc($($MethodHandles::lookup()))->findStatic($Class::class$, "forName"_s, $(MT_Class_forName_S()));
}

$MethodType* MethodHandleConstants::MT_Class_forName_SbCL() {
	$init(MethodHandleConstants);
	shouldNotCallThis();
	$init($Boolean);
	$load($ClassLoader);
	return $MethodType::methodType($Class::class$, $String::class$, $$new($ClassArray, {
		$Boolean::TYPE,
		$ClassLoader::class$
	}));
}

$MethodHandle* MethodHandleConstants::MH_Class_forName_SbCL() {
	$init(MethodHandleConstants);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	shouldNotCallThis();
	return $nc($($MethodHandles::lookup()))->findStatic($Class::class$, "forName"_s, $(MT_Class_forName_SbCL()));
}

void MethodHandleConstants::shouldNotCallThis() {
	$init(MethodHandleConstants);
	if ($System::getProperty("MethodHandleConstants.allow-untransformed"_s) != nullptr) {
		return;
	}
	$throwNew($AssertionError, $of("this code should be statically transformed away by Indify"_s));
}

void clinit$MethodHandleConstants($Class* class$) {
	$assignStatic(MethodHandleConstants::EXPECT_OUTPUT, $new($StringArray, {
		"Obtaining method handle constants:"_s,
		"MethodHandle(String,char,char)String"_s,
		"MethodHandle(MethodHandle,String,char,char)String"_s,
		"MethodHandle(MethodHandle,String,char,char)String"_s,
		"MethodHandle(String)Class"_s,
		"MethodHandle(String,boolean,ClassLoader)Class"_s,
		"Done."_s
	}));
}

MethodHandleConstants::MethodHandleConstants() {
}

$Class* MethodHandleConstants::load$($String* name, bool initialize) {
	$loadClass(MethodHandleConstants, name, initialize, &_MethodHandleConstants_ClassInfo_, clinit$MethodHandleConstants, allocate$MethodHandleConstants);
	return class$;
}

$Class* MethodHandleConstants::class$ = nullptr;

			} // invoke
		} // lang
	} // java
} // test