#include <IntlTest.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/PrintWriter.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/reflect/InvocationTargetException.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Modifier.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedHashMap.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef SPACES
#undef TYPE

using $MethodArray = $Array<::java::lang::reflect::Method>;
using $IOException = ::java::io::IOException;
using $PrintWriter = ::java::io::PrintWriter;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $InvocationTargetException = ::java::lang::reflect::InvocationTargetException;
using $Method = ::java::lang::reflect::Method;
using $Modifier = ::java::lang::reflect::Modifier;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $LinkedHashMap = ::java::util::LinkedHashMap;
using $List = ::java::util::List;

$String* IntlTest::SPACES = nullptr;

void IntlTest::init$() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$set(this, testMethods, $new($LinkedHashMap));
	$var($MethodArray, methods, $of(this)->getClass()->getDeclaredMethods());
	{
		$var($MethodArray, arr$, methods);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($Method, method, arr$->get(i$));
			{
				bool var$1 = $Modifier::isPublic($nc(method)->getModifiers());
				bool var$0 = var$1 && method->getReturnType() == $Void::TYPE;
				if (var$0 && method->getParameterCount() == 0) {
					$var($String, name, method->getName());
					if ($nc(name)->length() > 4) {
						bool var$2 = name->startsWith("Test"_s);
						if (var$2 || name->startsWith("test"_s)) {
							this->testMethods->put(name, method);
						}
					}
				}
			}
		}
	}
}

void IntlTest::run($StringArray* args) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$set(this, log$, $new($PrintWriter, $System::out, true));
	$var($List, testsToRun, $new($ArrayList, $nc(args)->length));
	{
		$var($StringArray, arr$, args);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$var($String, arg, arr$->get(i$));
			{
				$var($String, s3591$, arg);
				int32_t tmp3591$ = -1;
				switch ($nc(s3591$)->hashCode()) {
				case 0x57825cb5:
					if (s3591$->equals("-verbose"_s)) {
						tmp3591$ = 0;
					}
					break;
				case 0x1211c3d1:
					if (s3591$->equals("-prompt"_s)) {
						tmp3591$ = 1;
					}
					break;
				case (int32_t)0xc17fecf8:
					if (s3591$->equals("-nothrow"_s)) {
						tmp3591$ = 2;
					}
					break;
				case (int32_t)0x91882b38:
					if (s3591$->equals("-exitcode"_s)) {
						tmp3591$ = 3;
					}
					break;
				}
				{
					$var($Method, m, nullptr);
					switch (tmp3591$) {
					case 0:
						this->verbose = true;
						break;
					case 1:
						this->prompt = true;
						break;
					case 2:
						this->nothrow = true;
						break;
					case 3:
						this->exitCode = true;
						break;
					default:
						$assign(m, $cast($Method, this->testMethods->get(arg)));
						if (m == nullptr) {
							$nc($System::out)->println($$str({"Method "_s, arg, ": not found"_s}));
							usage();
							return;
						}
						testsToRun->add(m);
						break;
					}
				}
			}
		}
	}
	if (testsToRun->isEmpty()) {
		testsToRun->addAll($(this->testMethods->values()));
	}
	$nc($System::out)->println($$str({$($of(this)->getClass()->getName()), " {"_s}));
	++this->indentLevel;
	{
		$var($Iterator, i$, testsToRun->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Method, testMethod, $cast($Method, i$->next()));
			{
				int32_t oldCount = this->errorCount;
				writeTestName($($nc(testMethod)->getName()));
				try {
					testMethod->invoke(this, $$new($ObjectArray, 0));
				} catch ($IllegalAccessException& e) {
					errln($$str({"Can\'t acces test method "_s, $(testMethod->getName())}));
				} catch ($InvocationTargetException& e) {
					errln($$str({"Uncaught exception thrown in test method "_s, $(testMethod->getName())}));
					$$nc(e->getTargetException())->printStackTrace(this->log$);
				}
				writeTestResult(this->errorCount - oldCount);
			}
		}
	}
	--this->indentLevel;
	writeTestResult(this->errorCount);
	if (this->prompt) {
		$System::out->println("Hit RETURN to exit..."_s);
		try {
			$nc($System::in)->read();
		} catch ($IOException& e) {
			$var($StringBuilder, var$0, $new($StringBuilder));
			var$0->append("Exception: "_s);
			var$0->append($(e->toString()));
			var$0->append($(e->getMessage()));
			$System::out->println($$str(var$0));
		}
	}
	if (this->nothrow) {
		if (this->exitCode) {
			$System::exit(this->errorCount);
		}
		if (this->errorCount > 0) {
			$throwNew($IllegalArgumentException, $$str({"encountered "_s, $$str(this->errorCount), " errors"_s}));
		}
	}
}

void IntlTest::log($String* message) {
	logImpl(message, false);
}

void IntlTest::logln($String* message) {
	logImpl(message, true);
}

void IntlTest::logln() {
	logImpl(nullptr, true);
}

void IntlTest::logImpl($String* message, bool newline) {
	if (this->verbose) {
		if (message != nullptr) {
			indent(this->indentLevel + 1);
			$nc(this->log$)->print(message);
		}
		if (newline) {
			$nc(this->log$)->println();
		}
	}
}

void IntlTest::err($String* message) {
	errImpl(message, false);
}

void IntlTest::errln($String* message) {
	errImpl(message, true);
}

void IntlTest::errImpl($String* message, bool newline) {
	++this->errorCount;
	indent(this->indentLevel + 1);
	$nc(this->log$)->print(message);
	if (newline) {
		this->log$->println();
	}
	this->log$->flush();
	if (!this->nothrow) {
		$throwNew($RuntimeException, message);
	}
}

int32_t IntlTest::getErrorCount() {
	return this->errorCount;
}

void IntlTest::writeTestName($String* testName) {
	indent(this->indentLevel);
	$nc(this->log$)->print(testName);
	this->log$->flush();
	this->needLineFeed = true;
}

void IntlTest::writeTestResult(int32_t count) {
	if (!this->needLineFeed) {
		indent(this->indentLevel);
		$nc(this->log$)->print("}"_s);
	}
	this->needLineFeed = false;
	if (count != 0) {
		$nc(this->log$)->println(" FAILED"_s);
	} else {
		$nc(this->log$)->println(" Passed"_s);
	}
}

$String* IntlTest::toHexString($String* s) {
	$init(IntlTest);
	$useLocalObjectStack();
	$var($StringBuilder, sb, $new($StringBuilder, " "_s));
	for (int32_t i = 0; i < $nc(s)->length(); ++i) {
		sb->append($($Integer::toHexString(s->charAt(i))));
		sb->append(u' ');
	}
	return sb->toString();
}

void IntlTest::indent(int32_t distance) {
	if (this->needLineFeed) {
		$nc(this->log$)->println(" {"_s);
		this->needLineFeed = false;
	}
	$nc(this->log$)->print($(IntlTest::SPACES->substring(0, distance * 2)));
}

void IntlTest::usage() {
	$useLocalObjectStack();
	$nc($System::out)->println($$str({$($of(this)->getClass()->getName()), ": [-verbose] [-nothrow] [-exitcode] [-prompt] [test names]"_s}));
	$System::out->println("  Available test names:"_s);
	{
		$var($Iterator, i$, $$nc(this->testMethods->keySet())->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, methodName, $cast($String, i$->next()));
			{
				$System::out->println($$str({"\t"_s, methodName}));
			}
		}
	}
}

IntlTest::IntlTest() {
}

void IntlTest::clinit$($Class* clazz) {
	$assignStatic(IntlTest::SPACES, "                                          "_s);
}

$Class* IntlTest::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"prompt", "Z", nullptr, $PRIVATE, $field(IntlTest, prompt)},
		{"nothrow", "Z", nullptr, $PRIVATE, $field(IntlTest, nothrow)},
		{"verbose", "Z", nullptr, $PROTECTED, $field(IntlTest, verbose)},
		{"exitCode", "Z", nullptr, $PRIVATE, $field(IntlTest, exitCode)},
		{"log", "Ljava/io/PrintWriter;", nullptr, $PRIVATE, $field(IntlTest, log$)},
		{"indentLevel", "I", nullptr, $PRIVATE, $field(IntlTest, indentLevel)},
		{"needLineFeed", "Z", nullptr, $PRIVATE, $field(IntlTest, needLineFeed)},
		{"errorCount", "I", nullptr, $PRIVATE, $field(IntlTest, errorCount)},
		{"testMethods", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/reflect/Method;>;", $PRIVATE | $FINAL, $field(IntlTest, testMethods)},
		{"SPACES", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IntlTest, SPACES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(IntlTest, init$, void)},
		{"err", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $virtualMethod(IntlTest, err, void, $String*)},
		{"errImpl", "(Ljava/lang/String;Z)V", nullptr, $PRIVATE, $method(IntlTest, errImpl, void, $String*, bool)},
		{"errln", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $virtualMethod(IntlTest, errln, void, $String*)},
		{"getErrorCount", "()I", nullptr, $PROTECTED, $virtualMethod(IntlTest, getErrorCount, int32_t)},
		{"indent", "(I)V", nullptr, $PRIVATE, $method(IntlTest, indent, void, int32_t)},
		{"log", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $virtualMethod(IntlTest, log, void, $String*)},
		{"logImpl", "(Ljava/lang/String;Z)V", nullptr, $PRIVATE, $method(IntlTest, logImpl, void, $String*, bool)},
		{"logln", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $virtualMethod(IntlTest, logln, void, $String*)},
		{"logln", "()V", nullptr, $PROTECTED, $virtualMethod(IntlTest, logln, void)},
		{"run", "([Ljava/lang/String;)V", nullptr, $PROTECTED, $virtualMethod(IntlTest, run, void, $StringArray*), "java.lang.Exception"},
		{"toHexString", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PROTECTED | $STATIC, $staticMethod(IntlTest, toHexString, $String*, $String*)},
		{"usage", "()V", nullptr, 0, $virtualMethod(IntlTest, usage, void)},
		{"writeTestName", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $virtualMethod(IntlTest, writeTestName, void, $String*)},
		{"writeTestResult", "(I)V", nullptr, $PROTECTED, $virtualMethod(IntlTest, writeTestResult, void, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"IntlTest",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(IntlTest, name, initialize, &classInfo$$, IntlTest::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(IntlTest);
	});
	return class$;
}

$Class* IntlTest::class$ = nullptr;