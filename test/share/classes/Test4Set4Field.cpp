#include <Test4Set4Field.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/reflect/Field.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Field = ::java::lang::reflect::Field;

$Object* Test4Set4Field::so = nullptr;

void Test4Set4Field::init$() {
	this->i = 911;
	this->ni = this->i;
	this->vi = this->i;
	$set(this, o, $new($Object));
	$set(this, no, this->o);
	$set(this, vo, this->o);
}

bool Test4Set4Field::testPrimitive() {
	$beforeCallerSensitive();
	try {
		$var($Field, f, this->getClass()->getDeclaredField("ni"_s));
		$nc(f)->setInt(this, 7);
		if (this->ni != 7) {
			$nc($System::out)->println("setInt() did not work"_s);
		}
		return false;
	} catch ($IllegalAccessException& iae) {
		return true;
	}
	$shouldNotReachHere();
}

bool Test4Set4Field::testStaticPrimitive() {
	$beforeCallerSensitive();
	try {
		$var($Field, f, this->getClass()->getDeclaredField("si"_s));
		$nc(f)->setInt(this, 13);
		{
			$nc($System::out)->println("setInt() did not work for static"_s);
		}
		return false;
	} catch ($IllegalAccessException& iae) {
		return true;
	}
	$shouldNotReachHere();
}

bool Test4Set4Field::testObject() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($Object, saved, this->no);
	try {
		$var($Field, f, this->getClass()->getDeclaredField("no"_s));
		$nc(f)->set(this, $$new($Object));
		if ($equals(this->no, saved)) {
			$nc($System::out)->println("set() did not work"_s);
		}
		return false;
	} catch ($IllegalAccessException& iae) {
		return true;
	}
	$shouldNotReachHere();
}

bool Test4Set4Field::testStaticObject() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($Object, saved, Test4Set4Field::so);
	try {
		$var($Field, f, this->getClass()->getDeclaredField("so"_s));
		$nc(f)->set(this, $$new($Object));
		if ($equals(Test4Set4Field::so, saved)) {
			$nc($System::out)->println("set() did not work for static"_s);
		}
		return false;
	} catch ($IllegalAccessException& iae) {
		return true;
	}
	$shouldNotReachHere();
}

bool Test4Set4Field::testAccessiblePrimitive() {
	$beforeCallerSensitive();
	try {
		$var($Field, f, this->getClass()->getDeclaredField("i"_s));
		$nc(f)->setAccessible(true);
		f->setInt(this, 7);
		if (this->i != 7) {
			$nc($System::out)->println("setInt() did not work"_s);
		}
		return true;
	} catch ($IllegalAccessException& iae) {
		return false;
	}
	$shouldNotReachHere();
}

bool Test4Set4Field::testAccessibleStaticPrimitive() {
	$beforeCallerSensitive();
	try {
		$var($Field, f, this->getClass()->getDeclaredField("si"_s));
		$nc(f)->setAccessible(true);
		f->setInt(this, 13);
		{
			$nc($System::out)->println("setInt() did not work for static"_s);
		}
		return false;
	} catch ($IllegalAccessException& iae) {
		return true;
	}
	$shouldNotReachHere();
}

bool Test4Set4Field::testAccessibleObject() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($Object, saved, this->o);
	try {
		$var($Field, f, this->getClass()->getDeclaredField("o"_s));
		$nc(f)->setAccessible(true);
		f->set(this, $$new($Object));
		if ($equals(this->o, saved)) {
			$nc($System::out)->println("set() did not work"_s);
		}
		return true;
	} catch ($IllegalAccessException& iae) {
		return false;
	}
	$shouldNotReachHere();
}

bool Test4Set4Field::testAccessibleStaticObject() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($Object, saved, Test4Set4Field::so);
	try {
		$var($Field, f, this->getClass()->getDeclaredField("so"_s));
		$nc(f)->setAccessible(true);
		f->set(this, $$new($Object));
		if ($equals(Test4Set4Field::so, saved)) {
			$nc($System::out)->println("set() did not work for static"_s);
		}
		return false;
	} catch ($IllegalAccessException& iae) {
		return true;
	}
	$shouldNotReachHere();
}

bool Test4Set4Field::testVolatilePrimitive() {
	$beforeCallerSensitive();
	try {
		$var($Field, f, this->getClass()->getDeclaredField("vi"_s));
		$nc(f)->setAccessible(true);
		f->setInt(this, 7);
		if (this->vi != 7) {
			$nc($System::out)->println("setInt() did not work"_s);
		}
		return true;
	} catch ($IllegalAccessException& iae) {
		return false;
	}
	$shouldNotReachHere();
}

bool Test4Set4Field::testVolatileObject() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($Object, saved, this->vo);
	try {
		$var($Field, f, this->getClass()->getDeclaredField("vo"_s));
		$nc(f)->setAccessible(true);
		f->set(this, $$new($Object));
		if ($equals(this->vo, saved)) {
			$nc($System::out)->println("set() did not work"_s);
		}
		return true;
	} catch ($IllegalAccessException& iae) {
		return false;
	}
	$shouldNotReachHere();
}

void Test4Set4Field::clinit$($Class* clazz) {
	$assignStatic(Test4Set4Field::so, $new($Object));
}

Test4Set4Field::Test4Set4Field() {
}

$Class* Test4Set4Field::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"i", "I", nullptr, $PRIVATE | $FINAL, $field(Test4Set4Field, i)},
		{"o", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(Test4Set4Field, o)},
		{"ni", "I", nullptr, $PUBLIC | $FINAL, $field(Test4Set4Field, ni)},
		{"no", "Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL, $field(Test4Set4Field, no)},
		{"vi", "I", nullptr, $PUBLIC | $VOLATILE, $field(Test4Set4Field, vi)},
		{"vo", "Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE, $field(Test4Set4Field, vo)},
		{"si", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Test4Set4Field, si)},
		{"so", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Test4Set4Field, so)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Test4Set4Field, init$, void)},
		{"testAccessibleObject", "()Z", nullptr, 0, $virtualMethod(Test4Set4Field, testAccessibleObject, bool), "java.lang.NoSuchFieldException"},
		{"testAccessiblePrimitive", "()Z", nullptr, 0, $virtualMethod(Test4Set4Field, testAccessiblePrimitive, bool), "java.lang.NoSuchFieldException"},
		{"testAccessibleStaticObject", "()Z", nullptr, 0, $virtualMethod(Test4Set4Field, testAccessibleStaticObject, bool), "java.lang.NoSuchFieldException"},
		{"testAccessibleStaticPrimitive", "()Z", nullptr, 0, $virtualMethod(Test4Set4Field, testAccessibleStaticPrimitive, bool), "java.lang.NoSuchFieldException"},
		{"testObject", "()Z", nullptr, 0, $virtualMethod(Test4Set4Field, testObject, bool), "java.lang.NoSuchFieldException"},
		{"testPrimitive", "()Z", nullptr, 0, $virtualMethod(Test4Set4Field, testPrimitive, bool), "java.lang.NoSuchFieldException"},
		{"testStaticObject", "()Z", nullptr, 0, $virtualMethod(Test4Set4Field, testStaticObject, bool), "java.lang.NoSuchFieldException"},
		{"testStaticPrimitive", "()Z", nullptr, 0, $virtualMethod(Test4Set4Field, testStaticPrimitive, bool), "java.lang.NoSuchFieldException"},
		{"testVolatileObject", "()Z", nullptr, 0, $virtualMethod(Test4Set4Field, testVolatileObject, bool), "java.lang.NoSuchFieldException"},
		{"testVolatilePrimitive", "()Z", nullptr, 0, $virtualMethod(Test4Set4Field, testVolatilePrimitive, bool), "java.lang.NoSuchFieldException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Test4Set4Field",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Test4Set4Field, name, initialize, &classInfo$$, Test4Set4Field::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Test4Set4Field);
	});
	return class$;
}

$Class* Test4Set4Field::class$ = nullptr;