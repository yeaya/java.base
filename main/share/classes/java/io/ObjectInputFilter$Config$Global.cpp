#include <java/io/ObjectInputFilter$Config$Global.h>
#include <java/io/ObjectInputFilter$Config.h>
#include <java/io/ObjectInputFilter$FilterInfo.h>
#include <java/io/ObjectInputFilter$Status.h>
#include <java/io/ObjectInputFilter.h>
#include <java/io/Serializable.h>
#include <java/lang/Module.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <java/util/Optional.h>
#include <java/util/function/Function.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

#undef ALLOWED
#undef MAX_VALUE
#undef REJECTED
#undef UNDECIDED

using $ObjectInputFilter = ::java::io::ObjectInputFilter;
using $ObjectInputFilter$Config = ::java::io::ObjectInputFilter$Config;
using $ObjectInputFilter$FilterInfo = ::java::io::ObjectInputFilter$FilterInfo;
using $ObjectInputFilter$Status = ::java::io::ObjectInputFilter$Status;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $ArrayList = ::java::util::ArrayList;
using $Optional = ::java::util::Optional;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;

namespace java {
	namespace io {

class ObjectInputFilter$Config$Global$$Lambda$lambda$new$0 : public $Function {
	$class(ObjectInputFilter$Config$Global$$Lambda$lambda$new$0, $NO_CLASS_INIT, $Function)
public:
	void init$($String* pkg) {
		$set(this, pkg, pkg);
	}
	virtual $Object* apply(Object$* c) override {
		 return $of(ObjectInputFilter$Config$Global::lambda$new$0(pkg, $cast($Class, c)));
	}
	$String* pkg = nullptr;
};
$Class* ObjectInputFilter$Config$Global$$Lambda$lambda$new$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"pkg", "Ljava/lang/String;", nullptr, $PUBLIC, $field(ObjectInputFilter$Config$Global$$Lambda$lambda$new$0, pkg)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ObjectInputFilter$Config$Global$$Lambda$lambda$new$0, init$, void, $String*)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ObjectInputFilter$Config$Global$$Lambda$lambda$new$0, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.io.ObjectInputFilter$Config$Global$$Lambda$lambda$new$0",
		"java.lang.Object",
		"java.util.function.Function",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ObjectInputFilter$Config$Global$$Lambda$lambda$new$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ObjectInputFilter$Config$Global$$Lambda$lambda$new$0);
	});
	return class$;
}
$Class* ObjectInputFilter$Config$Global$$Lambda$lambda$new$0::class$ = nullptr;

class ObjectInputFilter$Config$Global$$Lambda$lambda$new$1$1 : public $Function {
	$class(ObjectInputFilter$Config$Global$$Lambda$lambda$new$1$1, $NO_CLASS_INIT, $Function)
public:
	void init$($String* pkg) {
		$set(this, pkg, pkg);
	}
	virtual $Object* apply(Object$* c) override {
		 return $of(ObjectInputFilter$Config$Global::lambda$new$1(pkg, $cast($Class, c)));
	}
	$String* pkg = nullptr;
};
$Class* ObjectInputFilter$Config$Global$$Lambda$lambda$new$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"pkg", "Ljava/lang/String;", nullptr, $PUBLIC, $field(ObjectInputFilter$Config$Global$$Lambda$lambda$new$1$1, pkg)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ObjectInputFilter$Config$Global$$Lambda$lambda$new$1$1, init$, void, $String*)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ObjectInputFilter$Config$Global$$Lambda$lambda$new$1$1, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.io.ObjectInputFilter$Config$Global$$Lambda$lambda$new$1$1",
		"java.lang.Object",
		"java.util.function.Function",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ObjectInputFilter$Config$Global$$Lambda$lambda$new$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ObjectInputFilter$Config$Global$$Lambda$lambda$new$1$1);
	});
	return class$;
}
$Class* ObjectInputFilter$Config$Global$$Lambda$lambda$new$1$1::class$ = nullptr;

class ObjectInputFilter$Config$Global$$Lambda$lambda$new$2$2 : public $Function {
	$class(ObjectInputFilter$Config$Global$$Lambda$lambda$new$2$2, $NO_CLASS_INIT, $Function)
public:
	void init$($String* pkgs) {
		$set(this, pkgs, pkgs);
	}
	virtual $Object* apply(Object$* c) override {
		 return $of(ObjectInputFilter$Config$Global::lambda$new$2(pkgs, $cast($Class, c)));
	}
	$String* pkgs = nullptr;
};
$Class* ObjectInputFilter$Config$Global$$Lambda$lambda$new$2$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"pkgs", "Ljava/lang/String;", nullptr, $PUBLIC, $field(ObjectInputFilter$Config$Global$$Lambda$lambda$new$2$2, pkgs)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ObjectInputFilter$Config$Global$$Lambda$lambda$new$2$2, init$, void, $String*)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ObjectInputFilter$Config$Global$$Lambda$lambda$new$2$2, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.io.ObjectInputFilter$Config$Global$$Lambda$lambda$new$2$2",
		"java.lang.Object",
		"java.util.function.Function",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ObjectInputFilter$Config$Global$$Lambda$lambda$new$2$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ObjectInputFilter$Config$Global$$Lambda$lambda$new$2$2);
	});
	return class$;
}
$Class* ObjectInputFilter$Config$Global$$Lambda$lambda$new$2$2::class$ = nullptr;

class ObjectInputFilter$Config$Global$$Lambda$lambda$new$3$3 : public $Function {
	$class(ObjectInputFilter$Config$Global$$Lambda$lambda$new$3$3, $NO_CLASS_INIT, $Function)
public:
	void init$($String* pkgs) {
		$set(this, pkgs, pkgs);
	}
	virtual $Object* apply(Object$* c) override {
		 return $of(ObjectInputFilter$Config$Global::lambda$new$3(pkgs, $cast($Class, c)));
	}
	$String* pkgs = nullptr;
};
$Class* ObjectInputFilter$Config$Global$$Lambda$lambda$new$3$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"pkgs", "Ljava/lang/String;", nullptr, $PUBLIC, $field(ObjectInputFilter$Config$Global$$Lambda$lambda$new$3$3, pkgs)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ObjectInputFilter$Config$Global$$Lambda$lambda$new$3$3, init$, void, $String*)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ObjectInputFilter$Config$Global$$Lambda$lambda$new$3$3, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.io.ObjectInputFilter$Config$Global$$Lambda$lambda$new$3$3",
		"java.lang.Object",
		"java.util.function.Function",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ObjectInputFilter$Config$Global$$Lambda$lambda$new$3$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ObjectInputFilter$Config$Global$$Lambda$lambda$new$3$3);
	});
	return class$;
}
$Class* ObjectInputFilter$Config$Global$$Lambda$lambda$new$3$3::class$ = nullptr;

class ObjectInputFilter$Config$Global$$Lambda$lambda$new$6$4 : public $Function {
	$class(ObjectInputFilter$Config$Global$$Lambda$lambda$new$6$4, $NO_CLASS_INIT, $Function)
public:
	void init$($String* name) {
		$set(this, name, name);
	}
	virtual $Object* apply(Object$* c) override {
		 return $of(ObjectInputFilter$Config$Global::lambda$new$6(name, $cast($Class, c)));
	}
	$String* name = nullptr;
};
$Class* ObjectInputFilter$Config$Global$$Lambda$lambda$new$6$4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"name", "Ljava/lang/String;", nullptr, $PUBLIC, $field(ObjectInputFilter$Config$Global$$Lambda$lambda$new$6$4, name)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ObjectInputFilter$Config$Global$$Lambda$lambda$new$6$4, init$, void, $String*)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ObjectInputFilter$Config$Global$$Lambda$lambda$new$6$4, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.io.ObjectInputFilter$Config$Global$$Lambda$lambda$new$6$4",
		"java.lang.Object",
		"java.util.function.Function",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ObjectInputFilter$Config$Global$$Lambda$lambda$new$6$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ObjectInputFilter$Config$Global$$Lambda$lambda$new$6$4);
	});
	return class$;
}
$Class* ObjectInputFilter$Config$Global$$Lambda$lambda$new$6$4::class$ = nullptr;

class ObjectInputFilter$Config$Global$$Lambda$lambda$new$7$5 : public $Function {
	$class(ObjectInputFilter$Config$Global$$Lambda$lambda$new$7$5, $NO_CLASS_INIT, $Function)
public:
	void init$($String* name) {
		$set(this, name, name);
	}
	virtual $Object* apply(Object$* c) override {
		 return $of(ObjectInputFilter$Config$Global::lambda$new$7(name, $cast($Class, c)));
	}
	$String* name = nullptr;
};
$Class* ObjectInputFilter$Config$Global$$Lambda$lambda$new$7$5::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"name", "Ljava/lang/String;", nullptr, $PUBLIC, $field(ObjectInputFilter$Config$Global$$Lambda$lambda$new$7$5, name)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ObjectInputFilter$Config$Global$$Lambda$lambda$new$7$5, init$, void, $String*)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ObjectInputFilter$Config$Global$$Lambda$lambda$new$7$5, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.io.ObjectInputFilter$Config$Global$$Lambda$lambda$new$7$5",
		"java.lang.Object",
		"java.util.function.Function",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ObjectInputFilter$Config$Global$$Lambda$lambda$new$7$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ObjectInputFilter$Config$Global$$Lambda$lambda$new$7$5);
	});
	return class$;
}
$Class* ObjectInputFilter$Config$Global$$Lambda$lambda$new$7$5::class$ = nullptr;

class ObjectInputFilter$Config$Global$$Lambda$lambda$new$8$6 : public $Function {
	$class(ObjectInputFilter$Config$Global$$Lambda$lambda$new$8$6, $NO_CLASS_INIT, $Function)
public:
	void init$($String* moduleName, $Function* patternFilter) {
		$set(this, moduleName, moduleName);
		$set(this, patternFilter, patternFilter);
	}
	virtual $Object* apply(Object$* c) override {
		 return $of(ObjectInputFilter$Config$Global::lambda$new$8(moduleName, patternFilter, $cast($Class, c)));
	}
	$String* moduleName = nullptr;
	$Function* patternFilter = nullptr;
};
$Class* ObjectInputFilter$Config$Global$$Lambda$lambda$new$8$6::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"moduleName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(ObjectInputFilter$Config$Global$$Lambda$lambda$new$8$6, moduleName)},
		{"patternFilter", "Ljava/util/function/Function;", nullptr, $PUBLIC, $field(ObjectInputFilter$Config$Global$$Lambda$lambda$new$8$6, patternFilter)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/util/function/Function;)V", nullptr, $PUBLIC, $method(ObjectInputFilter$Config$Global$$Lambda$lambda$new$8$6, init$, void, $String*, $Function*)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ObjectInputFilter$Config$Global$$Lambda$lambda$new$8$6, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.io.ObjectInputFilter$Config$Global$$Lambda$lambda$new$8$6",
		"java.lang.Object",
		"java.util.function.Function",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ObjectInputFilter$Config$Global$$Lambda$lambda$new$8$6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ObjectInputFilter$Config$Global$$Lambda$lambda$new$8$6);
	});
	return class$;
}
$Class* ObjectInputFilter$Config$Global$$Lambda$lambda$new$8$6::class$ = nullptr;

class ObjectInputFilter$Config$Global$$Lambda$lambda$checkInput$9$7 : public $Function {
	$class(ObjectInputFilter$Config$Global$$Lambda$lambda$checkInput$9$7, $NO_CLASS_INIT, $Function)
public:
	void init$($Class* cl) {
		this->cl = cl;
	}
	virtual $Object* apply(Object$* f) override {
		 return $of(ObjectInputFilter$Config$Global::lambda$checkInput$9(cl, $cast($Function, f)));
	}
	$Class* cl = nullptr;
};
$Class* ObjectInputFilter$Config$Global$$Lambda$lambda$checkInput$9$7::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"cl", "Ljava/lang/Class;", nullptr, $PUBLIC, $field(ObjectInputFilter$Config$Global$$Lambda$lambda$checkInput$9$7, cl)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Class;)V", nullptr, $PUBLIC, $method(ObjectInputFilter$Config$Global$$Lambda$lambda$checkInput$9$7, init$, void, $Class*)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ObjectInputFilter$Config$Global$$Lambda$lambda$checkInput$9$7, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.io.ObjectInputFilter$Config$Global$$Lambda$lambda$checkInput$9$7",
		"java.lang.Object",
		"java.util.function.Function",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ObjectInputFilter$Config$Global$$Lambda$lambda$checkInput$9$7, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ObjectInputFilter$Config$Global$$Lambda$lambda$checkInput$9$7);
	});
	return class$;
}
$Class* ObjectInputFilter$Config$Global$$Lambda$lambda$checkInput$9$7::class$ = nullptr;

class ObjectInputFilter$Config$Global$$Lambda$lambda$checkInput$10$8 : public $Predicate {
	$class(ObjectInputFilter$Config$Global$$Lambda$lambda$checkInput$10$8, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* p) override {
		 return ObjectInputFilter$Config$Global::lambda$checkInput$10($cast($ObjectInputFilter$Status, p));
	}
};
$Class* ObjectInputFilter$Config$Global$$Lambda$lambda$checkInput$10$8::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ObjectInputFilter$Config$Global$$Lambda$lambda$checkInput$10$8, init$, void)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(ObjectInputFilter$Config$Global$$Lambda$lambda$checkInput$10$8, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.io.ObjectInputFilter$Config$Global$$Lambda$lambda$checkInput$10$8",
		"java.lang.Object",
		"java.util.function.Predicate",
		nullptr,
		methodInfos$$
	};
	$loadClass(ObjectInputFilter$Config$Global$$Lambda$lambda$checkInput$10$8, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ObjectInputFilter$Config$Global$$Lambda$lambda$checkInput$10$8);
	});
	return class$;
}
$Class* ObjectInputFilter$Config$Global$$Lambda$lambda$checkInput$10$8::class$ = nullptr;

$ObjectInputFilter* ObjectInputFilter$Config$Global::createFilter($String* pattern, bool checkComponentType) {
	$init(ObjectInputFilter$Config$Global);
	try {
		return $new(ObjectInputFilter$Config$Global, pattern, checkComponentType);
	} catch ($UnsupportedOperationException& uoe) {
		return nullptr;
	}
	$shouldNotReachHere();
}

void ObjectInputFilter$Config$Global::init$($String* pattern, bool checkComponentType) {
	$useLocalObjectStack();
	bool hasLimits = false;
	$set(this, pattern, pattern);
	this->checkComponentType = checkComponentType;
	this->maxArrayLength = $Long::MAX_VALUE;
	this->maxDepth = $Long::MAX_VALUE;
	this->maxReferences = $Long::MAX_VALUE;
	this->maxStreamBytes = $Long::MAX_VALUE;
	$var($StringArray, patterns, $nc(pattern)->split(";"_s));
	$set(this, filters, $new($ArrayList, patterns->length));
	for (int32_t i = 0; i < patterns->length; ++i) {
		$var($String, p, patterns->get(i));
		int32_t nameLen = $nc(p)->length();
		if (nameLen == 0) {
			continue;
		}
		if (parseLimit(p)) {
			hasLimits = true;
			continue;
		}
		bool negate = p->charAt(0) == u'!';
		int32_t poffset = negate ? 1 : 0;
		int32_t slash = p->indexOf(u'/', poffset);
		if (slash == poffset) {
			$throwNew($IllegalArgumentException, $$str({"module name is missing in: \""_s, pattern, "\""_s}));
		}
		$var($String, moduleName, (slash >= 0) ? p->substring(poffset, slash) : ($String*)nullptr);
		poffset = (slash >= 0) ? slash + 1 : poffset;
		$var($Function, patternFilter, nullptr);
		if (p->endsWith("*"_s)) {
			if (p->endsWith(".*"_s)) {
				$var($String, pkg, p->substring(poffset, nameLen - 2));
				if (pkg->isEmpty()) {
					$throwNew($IllegalArgumentException, $$str({"package missing in: \""_s, pattern, "\""_s}));
				}
				if (negate) {
					$assign(patternFilter, $new(ObjectInputFilter$Config$Global$$Lambda$lambda$new$0, pkg));
				} else {
					$assign(patternFilter, $new(ObjectInputFilter$Config$Global$$Lambda$lambda$new$1$1, pkg));
				}
			} else if (p->endsWith(".**"_s)) {
				$var($String, pkgs, p->substring(poffset, nameLen - 2));
				if (pkgs->length() < 2) {
					$throwNew($IllegalArgumentException, $$str({"package missing in: \""_s, pattern, "\""_s}));
				}
				if (negate) {
					$assign(patternFilter, $new(ObjectInputFilter$Config$Global$$Lambda$lambda$new$2$2, pkgs));
				} else {
					$assign(patternFilter, $new(ObjectInputFilter$Config$Global$$Lambda$lambda$new$3$3, pkgs));
				}
			} else {
				$var($String, className, p->substring(poffset, nameLen - 1));
				if (negate) {
					$assign(patternFilter, $new(ObjectInputFilter$Config$Global$$Lambda$lambda$new$2$2, className));
				} else {
					$assign(patternFilter, $new(ObjectInputFilter$Config$Global$$Lambda$lambda$new$3$3, className));
				}
			}
		} else {
			$var($String, name, p->substring(poffset));
			if (name->isEmpty()) {
				$throwNew($IllegalArgumentException, $$str({"class or package missing in: \""_s, pattern, "\""_s}));
			}
			if (negate) {
				$assign(patternFilter, $new(ObjectInputFilter$Config$Global$$Lambda$lambda$new$6$4, name));
			} else {
				$assign(patternFilter, $new(ObjectInputFilter$Config$Global$$Lambda$lambda$new$7$5, name));
			}
		}
		if (moduleName == nullptr) {
			this->filters->add(patternFilter);
		} else {
			this->filters->add($$new(ObjectInputFilter$Config$Global$$Lambda$lambda$new$8$6, moduleName, patternFilter));
		}
	}
	if (this->filters->isEmpty() && !hasLimits) {
		$throwNew($UnsupportedOperationException, "no non-empty patterns"_s);
	}
}

bool ObjectInputFilter$Config$Global::parseLimit($String* pattern) {
	$useLocalObjectStack();
	int32_t eqNdx = $nc(pattern)->indexOf(u'=');
	if (eqNdx < 0) {
		return false;
	}
	$var($String, valueString, pattern->substring(eqNdx + 1));
	if (pattern->startsWith("maxdepth="_s)) {
		this->maxDepth = parseValue(valueString);
	} else if (pattern->startsWith("maxarray="_s)) {
		this->maxArrayLength = parseValue(valueString);
	} else if (pattern->startsWith("maxrefs="_s)) {
		this->maxReferences = parseValue(valueString);
	} else if (pattern->startsWith("maxbytes="_s)) {
		this->maxStreamBytes = parseValue(valueString);
	} else {
		$throwNew($IllegalArgumentException, $$str({"unknown limit: "_s, $(pattern->substring(0, eqNdx))}));
	}
	return true;
}

int64_t ObjectInputFilter$Config$Global::parseValue($String* string) {
	$init(ObjectInputFilter$Config$Global);
	int64_t value = $Long::parseLong(string);
	if (value < 0) {
		$throwNew($IllegalArgumentException, $$str({"negative limit: "_s, string}));
	}
	return value;
}

$ObjectInputFilter$Status* ObjectInputFilter$Config$Global::checkInput($ObjectInputFilter$FilterInfo* filterInfo) {
	$useLocalObjectStack();
	bool var$4 = $nc(filterInfo)->references() < 0;
	bool var$3 = var$4 || filterInfo->depth() < 0;
	bool var$2 = var$3 || filterInfo->streamBytes() < 0;
	bool var$1 = var$2 || filterInfo->references() > this->maxReferences;
	bool var$0 = var$1 || filterInfo->depth() > this->maxDepth;
	if (var$0 || filterInfo->streamBytes() > this->maxStreamBytes) {
		$init($ObjectInputFilter$Status);
		return $ObjectInputFilter$Status::REJECTED;
	}
	$Class* clazz = filterInfo->serialClass();
	if (clazz != nullptr) {
		if (clazz->isArray()) {
			bool var$5 = filterInfo->arrayLength() >= 0;
			if (var$5 && filterInfo->arrayLength() > this->maxArrayLength) {
				$init($ObjectInputFilter$Status);
				return $ObjectInputFilter$Status::REJECTED;
			}
			if (!this->checkComponentType) {
				$ObjectInputFilter$Config::traceFilter("Pattern filter array class: {0}, filter: {1}"_s, $$new($ObjectArray, {
					clazz,
					this
				}));
				$init($ObjectInputFilter$Status);
				return $ObjectInputFilter$Status::UNDECIDED;
			}
			do {
				clazz = $nc(clazz)->getComponentType();
			} while ($nc(clazz)->isArray());
		}
		if ($nc(clazz)->isPrimitive()) {
			$ObjectInputFilter$Config::traceFilter("Pattern filter UNDECIDED, primitive class: {0}, filter: {1}"_s, $$new($ObjectArray, {
				clazz,
				this
			}));
			$init($ObjectInputFilter$Status);
			return $ObjectInputFilter$Status::UNDECIDED;
		} else {
			$Class* cl = clazz;
			$var($Optional, status, $$nc($$nc($$nc(this->filters->stream())->map($$new(ObjectInputFilter$Config$Global$$Lambda$lambda$checkInput$9$7, cl)))->filter($$new(ObjectInputFilter$Config$Global$$Lambda$lambda$checkInput$10$8)))->findFirst());
			$init($ObjectInputFilter$Status);
			$ObjectInputFilter$Status* s = $cast($ObjectInputFilter$Status, $nc(status)->orElse($ObjectInputFilter$Status::UNDECIDED));
			$ObjectInputFilter$Config::traceFilter("Pattern filter {0}, class: {1}, filter: {2}"_s, $$new($ObjectArray, {
				s,
				cl,
				this
			}));
			return s;
		}
	}
	$init($ObjectInputFilter$Status);
	return $ObjectInputFilter$Status::UNDECIDED;
}

bool ObjectInputFilter$Config$Global::matchesPackage($Class* c, $String* pkg) {
	$init(ObjectInputFilter$Config$Global);
	return $nc(pkg)->equals($($nc(c)->getPackageName()));
}

$String* ObjectInputFilter$Config$Global::toString() {
	return this->pattern;
}

bool ObjectInputFilter$Config$Global::lambda$checkInput$10($ObjectInputFilter$Status* p) {
	$init(ObjectInputFilter$Config$Global);
	$init($ObjectInputFilter$Status);
	return p != $ObjectInputFilter$Status::UNDECIDED;
}

$ObjectInputFilter$Status* ObjectInputFilter$Config$Global::lambda$checkInput$9($Class* cl, $Function* f) {
	$init(ObjectInputFilter$Config$Global);
	return $cast($ObjectInputFilter$Status, $nc(f)->apply(cl));
}

$ObjectInputFilter$Status* ObjectInputFilter$Config$Global::lambda$new$8($String* moduleName, $Function* patternFilter, $Class* c) {
	$init(ObjectInputFilter$Config$Global);
	$useLocalObjectStack();
	$init($ObjectInputFilter$Status);
	return $nc(moduleName)->equals($($$nc($nc(c)->getModule())->getName())) ? $cast($ObjectInputFilter$Status, $nc(patternFilter)->apply(c)) : $ObjectInputFilter$Status::UNDECIDED;
}

$ObjectInputFilter$Status* ObjectInputFilter$Config$Global::lambda$new$7($String* name, $Class* c) {
	$init(ObjectInputFilter$Config$Global);
	$init($ObjectInputFilter$Status);
	return $$nc($nc(c)->getName())->equals(name) ? $ObjectInputFilter$Status::ALLOWED : $ObjectInputFilter$Status::UNDECIDED;
}

$ObjectInputFilter$Status* ObjectInputFilter$Config$Global::lambda$new$6($String* name, $Class* c) {
	$init(ObjectInputFilter$Config$Global);
	$init($ObjectInputFilter$Status);
	return $$nc($nc(c)->getName())->equals(name) ? $ObjectInputFilter$Status::REJECTED : $ObjectInputFilter$Status::UNDECIDED;
}

$ObjectInputFilter$Status* ObjectInputFilter$Config$Global::lambda$new$3($String* pkgs, $Class* c) {
	$init(ObjectInputFilter$Config$Global);
	$init($ObjectInputFilter$Status);
	return $$nc($nc(c)->getName())->startsWith(pkgs) ? $ObjectInputFilter$Status::ALLOWED : $ObjectInputFilter$Status::UNDECIDED;
}

$ObjectInputFilter$Status* ObjectInputFilter$Config$Global::lambda$new$2($String* pkgs, $Class* c) {
	$init(ObjectInputFilter$Config$Global);
	$init($ObjectInputFilter$Status);
	return $$nc($nc(c)->getName())->startsWith(pkgs) ? $ObjectInputFilter$Status::REJECTED : $ObjectInputFilter$Status::UNDECIDED;
}

$ObjectInputFilter$Status* ObjectInputFilter$Config$Global::lambda$new$1($String* pkg, $Class* c) {
	$init(ObjectInputFilter$Config$Global);
	$init($ObjectInputFilter$Status);
	return matchesPackage(c, pkg) ? $ObjectInputFilter$Status::ALLOWED : $ObjectInputFilter$Status::UNDECIDED;
}

$ObjectInputFilter$Status* ObjectInputFilter$Config$Global::lambda$new$0($String* pkg, $Class* c) {
	$init(ObjectInputFilter$Config$Global);
	$init($ObjectInputFilter$Status);
	return matchesPackage(c, pkg) ? $ObjectInputFilter$Status::REJECTED : $ObjectInputFilter$Status::UNDECIDED;
}

ObjectInputFilter$Config$Global::ObjectInputFilter$Config$Global() {
}

$Class* ObjectInputFilter$Config$Global::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("java.io.ObjectInputFilter$Config$Global$$Lambda$lambda$new$0")) {
			return ObjectInputFilter$Config$Global$$Lambda$lambda$new$0::load$(name, initialize);
		}
		if (name->equals("java.io.ObjectInputFilter$Config$Global$$Lambda$lambda$new$1$1")) {
			return ObjectInputFilter$Config$Global$$Lambda$lambda$new$1$1::load$(name, initialize);
		}
		if (name->equals("java.io.ObjectInputFilter$Config$Global$$Lambda$lambda$new$2$2")) {
			return ObjectInputFilter$Config$Global$$Lambda$lambda$new$2$2::load$(name, initialize);
		}
		if (name->equals("java.io.ObjectInputFilter$Config$Global$$Lambda$lambda$new$3$3")) {
			return ObjectInputFilter$Config$Global$$Lambda$lambda$new$3$3::load$(name, initialize);
		}
		if (name->equals("java.io.ObjectInputFilter$Config$Global$$Lambda$lambda$new$6$4")) {
			return ObjectInputFilter$Config$Global$$Lambda$lambda$new$6$4::load$(name, initialize);
		}
		if (name->equals("java.io.ObjectInputFilter$Config$Global$$Lambda$lambda$new$7$5")) {
			return ObjectInputFilter$Config$Global$$Lambda$lambda$new$7$5::load$(name, initialize);
		}
		if (name->equals("java.io.ObjectInputFilter$Config$Global$$Lambda$lambda$new$8$6")) {
			return ObjectInputFilter$Config$Global$$Lambda$lambda$new$8$6::load$(name, initialize);
		}
		if (name->equals("java.io.ObjectInputFilter$Config$Global$$Lambda$lambda$checkInput$9$7")) {
			return ObjectInputFilter$Config$Global$$Lambda$lambda$checkInput$9$7::load$(name, initialize);
		}
		if (name->equals("java.io.ObjectInputFilter$Config$Global$$Lambda$lambda$checkInput$10$8")) {
			return ObjectInputFilter$Config$Global$$Lambda$lambda$checkInput$10$8::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"pattern", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ObjectInputFilter$Config$Global, pattern)},
		{"filters", "Ljava/util/List;", "Ljava/util/List<Ljava/util/function/Function<Ljava/lang/Class<*>;Ljava/io/ObjectInputFilter$Status;>;>;", $PRIVATE | $FINAL, $field(ObjectInputFilter$Config$Global, filters)},
		{"maxStreamBytes", "J", nullptr, $PRIVATE, $field(ObjectInputFilter$Config$Global, maxStreamBytes)},
		{"maxDepth", "J", nullptr, $PRIVATE, $field(ObjectInputFilter$Config$Global, maxDepth)},
		{"maxReferences", "J", nullptr, $PRIVATE, $field(ObjectInputFilter$Config$Global, maxReferences)},
		{"maxArrayLength", "J", nullptr, $PRIVATE, $field(ObjectInputFilter$Config$Global, maxArrayLength)},
		{"checkComponentType", "Z", nullptr, $PRIVATE | $FINAL, $field(ObjectInputFilter$Config$Global, checkComponentType)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Z)V", nullptr, $PRIVATE, $method(ObjectInputFilter$Config$Global, init$, void, $String*, bool)},
		{"checkInput", "(Ljava/io/ObjectInputFilter$FilterInfo;)Ljava/io/ObjectInputFilter$Status;", nullptr, $PUBLIC, $virtualMethod(ObjectInputFilter$Config$Global, checkInput, $ObjectInputFilter$Status*, $ObjectInputFilter$FilterInfo*)},
		{"createFilter", "(Ljava/lang/String;Z)Ljava/io/ObjectInputFilter;", nullptr, $STATIC, $staticMethod(ObjectInputFilter$Config$Global, createFilter, $ObjectInputFilter*, $String*, bool)},
		{"lambda$checkInput$10", "(Ljava/io/ObjectInputFilter$Status;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ObjectInputFilter$Config$Global, lambda$checkInput$10, bool, $ObjectInputFilter$Status*)},
		{"lambda$checkInput$9", "(Ljava/lang/Class;Ljava/util/function/Function;)Ljava/io/ObjectInputFilter$Status;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ObjectInputFilter$Config$Global, lambda$checkInput$9, $ObjectInputFilter$Status*, $Class*, $Function*)},
		{"lambda$new$0", "(Ljava/lang/String;Ljava/lang/Class;)Ljava/io/ObjectInputFilter$Status;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ObjectInputFilter$Config$Global, lambda$new$0, $ObjectInputFilter$Status*, $String*, $Class*)},
		{"lambda$new$1", "(Ljava/lang/String;Ljava/lang/Class;)Ljava/io/ObjectInputFilter$Status;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ObjectInputFilter$Config$Global, lambda$new$1, $ObjectInputFilter$Status*, $String*, $Class*)},
		{"lambda$new$2", "(Ljava/lang/String;Ljava/lang/Class;)Ljava/io/ObjectInputFilter$Status;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ObjectInputFilter$Config$Global, lambda$new$2, $ObjectInputFilter$Status*, $String*, $Class*)},
		{"lambda$new$3", "(Ljava/lang/String;Ljava/lang/Class;)Ljava/io/ObjectInputFilter$Status;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ObjectInputFilter$Config$Global, lambda$new$3, $ObjectInputFilter$Status*, $String*, $Class*)},
		{"lambda$new$6", "(Ljava/lang/String;Ljava/lang/Class;)Ljava/io/ObjectInputFilter$Status;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ObjectInputFilter$Config$Global, lambda$new$6, $ObjectInputFilter$Status*, $String*, $Class*)},
		{"lambda$new$7", "(Ljava/lang/String;Ljava/lang/Class;)Ljava/io/ObjectInputFilter$Status;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ObjectInputFilter$Config$Global, lambda$new$7, $ObjectInputFilter$Status*, $String*, $Class*)},
		{"lambda$new$8", "(Ljava/lang/String;Ljava/util/function/Function;Ljava/lang/Class;)Ljava/io/ObjectInputFilter$Status;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ObjectInputFilter$Config$Global, lambda$new$8, $ObjectInputFilter$Status*, $String*, $Function*, $Class*)},
		{"matchesPackage", "(Ljava/lang/Class;Ljava/lang/String;)Z", "(Ljava/lang/Class<*>;Ljava/lang/String;)Z", $PRIVATE | $STATIC, $staticMethod(ObjectInputFilter$Config$Global, matchesPackage, bool, $Class*, $String*)},
		{"parseLimit", "(Ljava/lang/String;)Z", nullptr, $PRIVATE, $method(ObjectInputFilter$Config$Global, parseLimit, bool, $String*)},
		{"parseValue", "(Ljava/lang/String;)J", nullptr, $PRIVATE | $STATIC, $staticMethod(ObjectInputFilter$Config$Global, parseValue, int64_t, $String*), "java.lang.IllegalArgumentException"},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ObjectInputFilter$Config$Global, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.io.ObjectInputFilter$Config", "java.io.ObjectInputFilter", "Config", $PUBLIC | $STATIC | $FINAL},
		{"java.io.ObjectInputFilter$Config$Global", "java.io.ObjectInputFilter$Config", "Global", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.io.ObjectInputFilter$Config$Global",
		"java.lang.Object",
		"java.io.ObjectInputFilter",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.io.ObjectInputFilter"
	};
	$loadClass(ObjectInputFilter$Config$Global, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ObjectInputFilter$Config$Global);
	});
	return class$;
}

$Class* ObjectInputFilter$Config$Global::class$ = nullptr;

	} // io
} // java