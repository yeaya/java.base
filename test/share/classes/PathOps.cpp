#include <PathOps.h>

#include <java/lang/InternalError.h>
#include <java/nio/file/FileSystem.h>
#include <java/nio/file/FileSystems.h>
#include <java/nio/file/InvalidPathException.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/Paths.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $FileSystem = ::java::nio::file::FileSystem;
using $FileSystems = ::java::nio::file::FileSystems;
using $InvalidPathException = ::java::nio::file::InvalidPathException;
using $Path = ::java::nio::file::Path;
using $Paths = ::java::nio::file::Paths;

$FieldInfo _PathOps_FieldInfo_[] = {
	{"out", "Ljava/io/PrintStream;", nullptr, $STATIC | $FINAL, $staticField(PathOps, out)},
	{"path", "Ljava/nio/file/Path;", nullptr, $PRIVATE, $field(PathOps, path$)},
	{"exc", "Ljava/lang/Exception;", nullptr, $PRIVATE, $field(PathOps, exc)},
	{}
};

$MethodInfo _PathOps_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;[Ljava/lang/String;)V", nullptr, $PRIVATE | $TRANSIENT, $method(PathOps, init$, void, $String*, $StringArray*)},
	{"absolute", "()LPathOps;", nullptr, 0, $virtualMethod(PathOps, absolute, PathOps*)},
	{"check", "(Ljava/lang/Object;Ljava/lang/String;)V", nullptr, 0, $virtualMethod(PathOps, check, void, Object$*, $String*)},
	{"check", "(Ljava/lang/Object;Z)V", nullptr, 0, $virtualMethod(PathOps, check, void, Object$*, bool)},
	{"checkPath", "()V", nullptr, 0, $virtualMethod(PathOps, checkPath, void)},
	{"doUnixTests", "()V", nullptr, $STATIC, $staticMethod(PathOps, doUnixTests, void)},
	{"doWindowsTests", "()V", nullptr, $STATIC, $staticMethod(PathOps, doWindowsTests, void)},
	{"element", "(ILjava/lang/String;)LPathOps;", nullptr, 0, $virtualMethod(PathOps, element, PathOps*, int32_t, $String*)},
	{"ends", "(Ljava/lang/String;)LPathOps;", nullptr, 0, $virtualMethod(PathOps, ends, PathOps*, $String*)},
	{"fail", "()V", nullptr, 0, $virtualMethod(PathOps, fail, void)},
	{"hasRoot", "()LPathOps;", nullptr, 0, $virtualMethod(PathOps, hasRoot, PathOps*)},
	{"header", "(Ljava/lang/String;)V", nullptr, $STATIC, $staticMethod(PathOps, header, void, $String*)},
	{"invalid", "()LPathOps;", nullptr, 0, $virtualMethod(PathOps, invalid, PathOps*)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(PathOps, main, void, $StringArray*)},
	{"makeAbsolute", "()LPathOps;", nullptr, 0, $virtualMethod(PathOps, makeAbsolute, PathOps*)},
	{"name", "(Ljava/lang/String;)LPathOps;", nullptr, 0, $virtualMethod(PathOps, name, PathOps*, $String*)},
	{"normalize", "(Ljava/lang/String;)LPathOps;", nullptr, 0, $virtualMethod(PathOps, normalize, PathOps*, $String*)},
	{"notAbsolute", "()LPathOps;", nullptr, 0, $virtualMethod(PathOps, notAbsolute, PathOps*)},
	{"notEnds", "(Ljava/lang/String;)LPathOps;", nullptr, 0, $virtualMethod(PathOps, notEnds, PathOps*, $String*)},
	{"notStarts", "(Ljava/lang/String;)LPathOps;", nullptr, 0, $virtualMethod(PathOps, notStarts, PathOps*, $String*)},
	{"npes", "()V", nullptr, $STATIC, $staticMethod(PathOps, npes, void)},
	{"parent", "(Ljava/lang/String;)LPathOps;", nullptr, 0, $virtualMethod(PathOps, parent, PathOps*, $String*)},
	{"path", "()Ljava/nio/file/Path;", nullptr, 0, $virtualMethod(PathOps, path, $Path*)},
	{"relativize", "(Ljava/lang/String;Ljava/lang/String;)LPathOps;", nullptr, 0, $virtualMethod(PathOps, relativize, PathOps*, $String*, $String*)},
	{"relativizeFail", "(Ljava/lang/String;)LPathOps;", nullptr, 0, $virtualMethod(PathOps, relativizeFail, PathOps*, $String*)},
	{"resolve", "(Ljava/lang/String;Ljava/lang/String;)LPathOps;", nullptr, 0, $virtualMethod(PathOps, resolve, PathOps*, $String*, $String*)},
	{"resolveSibling", "(Ljava/lang/String;Ljava/lang/String;)LPathOps;", nullptr, 0, $virtualMethod(PathOps, resolveSibling, PathOps*, $String*, $String*)},
	{"root", "(Ljava/lang/String;)LPathOps;", nullptr, 0, $virtualMethod(PathOps, root, PathOps*, $String*)},
	{"starts", "(Ljava/lang/String;)LPathOps;", nullptr, 0, $virtualMethod(PathOps, starts, PathOps*, $String*)},
	{"string", "(Ljava/lang/String;)LPathOps;", nullptr, 0, $virtualMethod(PathOps, string, PathOps*, $String*)},
	{"subpath", "(IILjava/lang/String;)LPathOps;", nullptr, 0, $virtualMethod(PathOps, subpath, PathOps*, int32_t, int32_t, $String*)},
	{"test", "(Ljava/lang/String;[Ljava/lang/String;)LPathOps;", nullptr, $STATIC | $TRANSIENT, $staticMethod(PathOps, test, PathOps*, $String*, $StringArray*)},
	{"test", "(Ljava/nio/file/Path;)LPathOps;", nullptr, $STATIC, $staticMethod(PathOps, test, PathOps*, $Path*)},
	{}
};

$ClassInfo _PathOps_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"PathOps",
	"java.lang.Object",
	nullptr,
	_PathOps_FieldInfo_,
	_PathOps_MethodInfo_
};

$Object* allocate$PathOps($Class* clazz) {
	return $of($alloc(PathOps));
}

$PrintStream* PathOps::out = nullptr;

void PathOps::init$($String* first, $StringArray* more) {
	$useLocalCurrentObjectStackCache();
	$nc(PathOps::out)->println();
	try {
		$set(this, path$, $nc($($FileSystems::getDefault()))->getPath(first, more));
		$nc(PathOps::out)->format("%s -> %s"_s, $$new($ObjectArray, {
			$of(first),
			$of(this->path$)
		}));
	} catch ($Exception& x) {
		$set(this, exc, x);
		$nc(PathOps::out)->format("%s -> %s"_s, $$new($ObjectArray, {
			$of(first),
			$of(x)
		}));
	}
	$nc(PathOps::out)->println();
}

$Path* PathOps::path() {
	return this->path$;
}

void PathOps::fail() {
	$throwNew($RuntimeException, "PathOps failed"_s);
}

void PathOps::checkPath() {
	if (this->path$ == nullptr) {
		$throwNew($InternalError, "path is null"_s);
	}
}

void PathOps::check(Object$* result, $String* expected) {
	$useLocalCurrentObjectStackCache();
	$nc(PathOps::out)->format("\tExpected: %s\n"_s, $$new($ObjectArray, {$of(expected)}));
	$nc(PathOps::out)->format("\tActual: %s\n"_s, $$new($ObjectArray, {result}));
	if (result == nullptr) {
		if (expected == nullptr) {
			return;
		}
	} else if (expected != nullptr && $nc($($nc($of(result))->toString()))->equals($(expected->toString()))) {
		return;
	}
	fail();
}

void PathOps::check(Object$* result, bool expected) {
	check(result, $($Boolean::toString(expected)));
}

PathOps* PathOps::root($String* expected) {
	$nc(PathOps::out)->println("check root"_s);
	checkPath();
	check($($of($nc(this->path$)->getRoot())), expected);
	return this;
}

PathOps* PathOps::hasRoot() {
	$nc(PathOps::out)->println("check has root"_s);
	checkPath();
	if ($nc(this->path$)->getRoot() == nullptr) {
		fail();
	}
	return this;
}

PathOps* PathOps::parent($String* expected) {
	$nc(PathOps::out)->println("check parent"_s);
	checkPath();
	check($($of($nc(this->path$)->getParent())), expected);
	return this;
}

PathOps* PathOps::name($String* expected) {
	$nc(PathOps::out)->println("check name"_s);
	checkPath();
	check($($of($nc(this->path$)->getFileName())), expected);
	return this;
}

PathOps* PathOps::element(int32_t index, $String* expected) {
	$useLocalCurrentObjectStackCache();
	$nc(PathOps::out)->format("check element %d\n"_s, $$new($ObjectArray, {$($of($Integer::valueOf(index)))}));
	checkPath();
	check($($of($nc(this->path$)->getName(index))), expected);
	return this;
}

PathOps* PathOps::subpath(int32_t startIndex, int32_t endIndex, $String* expected) {
	$useLocalCurrentObjectStackCache();
	$nc(PathOps::out)->format("test subpath(%d,%d)\n"_s, $$new($ObjectArray, {
		$($of($Integer::valueOf(startIndex))),
		$($of($Integer::valueOf(endIndex)))
	}));
	checkPath();
	check($($of($nc(this->path$)->subpath(startIndex, endIndex))), expected);
	return this;
}

PathOps* PathOps::starts($String* prefix) {
	$useLocalCurrentObjectStackCache();
	$nc(PathOps::out)->format("test startsWith with %s\n"_s, $$new($ObjectArray, {$of(prefix)}));
	checkPath();
	$var($Path, s, $nc($($FileSystems::getDefault()))->getPath(prefix, $$new($StringArray, 0)));
	check($($of($Boolean::valueOf($nc(this->path$)->startsWith(s)))), true);
	return this;
}

PathOps* PathOps::notStarts($String* prefix) {
	$useLocalCurrentObjectStackCache();
	$nc(PathOps::out)->format("test not startsWith with %s\n"_s, $$new($ObjectArray, {$of(prefix)}));
	checkPath();
	$var($Path, s, $nc($($FileSystems::getDefault()))->getPath(prefix, $$new($StringArray, 0)));
	check($($of($Boolean::valueOf($nc(this->path$)->startsWith(s)))), false);
	return this;
}

PathOps* PathOps::ends($String* suffix) {
	$useLocalCurrentObjectStackCache();
	$nc(PathOps::out)->format("test endsWith %s\n"_s, $$new($ObjectArray, {$of(suffix)}));
	checkPath();
	$var($Path, s, $nc($($FileSystems::getDefault()))->getPath(suffix, $$new($StringArray, 0)));
	check($($of($Boolean::valueOf($nc(this->path$)->endsWith(s)))), true);
	return this;
}

PathOps* PathOps::notEnds($String* suffix) {
	$useLocalCurrentObjectStackCache();
	$nc(PathOps::out)->format("test not endsWith %s\n"_s, $$new($ObjectArray, {$of(suffix)}));
	checkPath();
	$var($Path, s, $nc($($FileSystems::getDefault()))->getPath(suffix, $$new($StringArray, 0)));
	check($($of($Boolean::valueOf($nc(this->path$)->endsWith(s)))), false);
	return this;
}

PathOps* PathOps::makeAbsolute() {
	$set(this, path$, $nc(this->path$)->toAbsolutePath());
	return this;
}

PathOps* PathOps::absolute() {
	$nc(PathOps::out)->println("check path is absolute"_s);
	checkPath();
	check($($of($Boolean::valueOf($nc(this->path$)->isAbsolute()))), true);
	return this;
}

PathOps* PathOps::notAbsolute() {
	$nc(PathOps::out)->println("check path is not absolute"_s);
	checkPath();
	check($($of($Boolean::valueOf($nc(this->path$)->isAbsolute()))), false);
	return this;
}

PathOps* PathOps::resolve($String* other, $String* expected) {
	$useLocalCurrentObjectStackCache();
	$nc(PathOps::out)->format("test resolve %s\n"_s, $$new($ObjectArray, {$of(other)}));
	checkPath();
	check($($of($nc(this->path$)->resolve(other))), expected);
	return this;
}

PathOps* PathOps::resolveSibling($String* other, $String* expected) {
	$useLocalCurrentObjectStackCache();
	$nc(PathOps::out)->format("test resolveSibling %s\n"_s, $$new($ObjectArray, {$of(other)}));
	checkPath();
	check($($of($nc(this->path$)->resolveSibling(other))), expected);
	return this;
}

PathOps* PathOps::relativize($String* other, $String* expected) {
	$useLocalCurrentObjectStackCache();
	$nc(PathOps::out)->format("test relativize %s\n"_s, $$new($ObjectArray, {$of(other)}));
	checkPath();
	$var($Path, that, $nc($($FileSystems::getDefault()))->getPath(other, $$new($StringArray, 0)));
	check($($of($nc(this->path$)->relativize(that))), expected);
	return this;
}

PathOps* PathOps::relativizeFail($String* other) {
	$useLocalCurrentObjectStackCache();
	$nc(PathOps::out)->format("test relativize %s\n"_s, $$new($ObjectArray, {$of(other)}));
	checkPath();
	$var($Path, that, $nc($($FileSystems::getDefault()))->getPath(other, $$new($StringArray, 0)));
	try {
		$var($Path, result, $nc(this->path$)->relativize(that));
		$nc(PathOps::out)->format("\tExpected: IllegalArgumentException"_s, $$new($ObjectArray, 0));
		$nc(PathOps::out)->format("\tActual: %s\n"_s, $$new($ObjectArray, {$of(result)}));
		fail();
	} catch ($IllegalArgumentException& expected) {
	}
	return this;
}

PathOps* PathOps::normalize($String* expected) {
	$nc(PathOps::out)->println("check normalized path"_s);
	checkPath();
	check($($of($nc(this->path$)->normalize())), expected);
	return this;
}

PathOps* PathOps::string($String* expected) {
	$nc(PathOps::out)->println("check string representation"_s);
	checkPath();
	check($of(this->path$), expected);
	return this;
}

PathOps* PathOps::invalid() {
	if (!($instanceOf($InvalidPathException, this->exc))) {
		$nc(PathOps::out)->println("InvalidPathException not thrown as expected"_s);
		fail();
	}
	return this;
}

PathOps* PathOps::test($String* first, $StringArray* more) {
	$init(PathOps);
	return $new(PathOps, first, more);
}

PathOps* PathOps::test($Path* path) {
	$init(PathOps);
	$useLocalCurrentObjectStackCache();
	return $new(PathOps, $($nc(path)->toString()), $$new($StringArray, 0));
}

void PathOps::header($String* s) {
	$init(PathOps);
	$nc(PathOps::out)->println();
	$nc(PathOps::out)->println();
	$nc(PathOps::out)->println($$str({"-- "_s, s, " --"_s}));
}

void PathOps::doWindowsTests() {
	$init(PathOps);
	$useLocalCurrentObjectStackCache();
	header("Windows specific tests"_s);
	$var($Path, cwd, $nc($($Paths::get(""_s, $$new($StringArray, 0))))->toAbsolutePath());
	$nc($(test("C:\\"_s, $$new($StringArray, 0))))->string("C:\\"_s);
	$nc($(test("C:\\"_s, $$new($StringArray, {""_s}))))->string("C:\\"_s);
	$nc($(test("C:\\"_s, $$new($StringArray, {"foo"_s}))))->string("C:\\foo"_s);
	$nc($(test("C:\\"_s, $$new($StringArray, {"\\foo"_s}))))->string("C:\\foo"_s);
	$nc($(test("C:\\"_s, $$new($StringArray, {"foo\\"_s}))))->string("C:\\foo"_s);
	$nc($(test("foo"_s, $$new($StringArray, {
		"bar"_s,
		"gus"_s
	}))))->string("foo\\bar\\gus"_s);
	$nc($(test(""_s, $$new($StringArray, 0))))->string(""_s);
	$nc($(test(""_s, $$new($StringArray, {"C:\\"_s}))))->string("C:\\"_s);
	$nc($(test(""_s, $$new($StringArray, {
		"foo"_s,
		""_s,
		"bar"_s,
		""_s,
		"\\gus"_s
	}))))->string("foo\\bar\\gus"_s);
	$nc($($nc($($nc($(test("C:\\a\\b\\c"_s, $$new($StringArray, 0))))->root("C:\\"_s)))->parent("C:\\a\\b"_s)))->name("c"_s);
	$nc($($nc($($nc($(test("C:a\\b\\c"_s, $$new($StringArray, 0))))->root("C:"_s)))->parent("C:a\\b"_s)))->name("c"_s);
	$nc($($nc($($nc($(test("\\\\server\\share\\a"_s, $$new($StringArray, 0))))->root("\\\\server\\share\\"_s)))->parent("\\\\server\\share\\"_s)))->name("a"_s);
	$nc($($nc($($nc($(test("C:\\"_s, $$new($StringArray, 0))))->root("C:\\"_s)))->parent(nullptr)))->name(nullptr);
	$nc($($nc($($nc($(test("C:"_s, $$new($StringArray, 0))))->root("C:"_s)))->parent(nullptr)))->name(nullptr);
	$nc($($nc($($nc($(test("\\\\server\\share\\"_s, $$new($StringArray, 0))))->root("\\\\server\\share\\"_s)))->parent(nullptr)))->name(nullptr);
	$nc($($nc($($nc($(test("a\\b"_s, $$new($StringArray, 0))))->root(nullptr)))->parent("a"_s)))->name("b"_s);
	$nc($($nc($($nc($(test("foo"_s, $$new($StringArray, 0))))->root(nullptr)))->parent(nullptr)))->name("foo"_s);
	$nc($($nc($($nc($(test(""_s, $$new($StringArray, 0))))->root(nullptr)))->parent(nullptr)))->name(""_s);
	$nc($($nc($($nc($($nc($($nc($(test("C:\\"_s, $$new($StringArray, 0))))->starts("C:\\"_s)))->starts("c:\\"_s)))->notStarts("C"_s)))->notStarts("C:"_s)))->notStarts(""_s);
	$nc($($nc($($nc($($nc($(test("C:"_s, $$new($StringArray, 0))))->starts("C:"_s)))->starts("c:"_s)))->notStarts("C"_s)))->notStarts(""_s);
	$nc($(test("\\"_s, $$new($StringArray, 0))))->starts("\\"_s);
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("C:\\foo\\bar"_s, $$new($StringArray, 0))))->starts("C:\\"_s)))->starts("C:\\foo"_s)))->starts("C:\\FOO"_s)))->starts("C:\\foo\\bar"_s)))->starts("C:\\Foo\\Bar"_s)))->notStarts("C:"_s)))->notStarts("C"_s)))->notStarts("C:foo"_s)))->notStarts(""_s);
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("\\foo\\bar"_s, $$new($StringArray, 0))))->starts("\\"_s)))->starts("\\foo"_s)))->starts("\\foO"_s)))->starts("\\foo\\bar"_s)))->starts("\\fOo\\BaR"_s)))->notStarts("foo"_s)))->notStarts("foo\\bar"_s)))->notStarts(""_s);
	$nc($($nc($($nc($($nc($(test("foo\\bar"_s, $$new($StringArray, 0))))->starts("foo"_s)))->starts("foo\\bar"_s)))->notStarts("\\"_s)))->notStarts(""_s);
	$nc($($nc($($nc($($nc($(test("\\\\server\\share"_s, $$new($StringArray, 0))))->starts("\\\\server\\share"_s)))->starts("\\\\server\\share\\"_s)))->notStarts("\\"_s)))->notStarts(""_s);
	$nc($($nc($(test(""_s, $$new($StringArray, 0))))->starts(""_s)))->notStarts("\\"_s);
	$nc($($nc($($nc($($nc($(test("C:\\"_s, $$new($StringArray, 0))))->ends("C:\\"_s)))->ends("c:\\"_s)))->notEnds("\\"_s)))->notEnds(""_s);
	$nc($($nc($($nc($(test("C:"_s, $$new($StringArray, 0))))->ends("C:"_s)))->ends("c:"_s)))->notEnds(""_s);
	$nc($($nc($(test("\\"_s, $$new($StringArray, 0))))->ends("\\"_s)))->notEnds(""_s);
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("C:\\foo\\bar"_s, $$new($StringArray, 0))))->ends("bar"_s)))->ends("BAR"_s)))->ends("foo\\bar"_s)))->ends("Foo\\Bar"_s)))->ends("C:\\foo\\bar"_s)))->ends("c:\\foO\\baR"_s)))->notEnds("r"_s)))->notEnds("\\foo\\bar"_s)))->notEnds(""_s);
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("\\foo\\bar"_s, $$new($StringArray, 0))))->ends("bar"_s)))->ends("BaR"_s)))->ends("foo\\bar"_s)))->ends("foO\\baR"_s)))->ends("\\foo\\bar"_s)))->ends("\\Foo\\Bar"_s)))->notEnds("oo\\bar"_s)))->notEnds(""_s);
	$nc($($nc($($nc($($nc($($nc($($nc($(test("foo\\bar"_s, $$new($StringArray, 0))))->ends("bar"_s)))->ends("BAR"_s)))->ends("foo\\bar"_s)))->ends("Foo\\Bar"_s)))->notEnds("ar"_s)))->notEnds(""_s);
	$nc($($nc($($nc($($nc($($nc($(test("\\\\server\\share"_s, $$new($StringArray, 0))))->ends("\\\\server\\share"_s)))->ends("\\\\server\\share\\"_s)))->notEnds("shared"_s)))->notEnds("\\"_s)))->notEnds(""_s);
	$nc($($nc($(test(""_s, $$new($StringArray, 0))))->ends(""_s)))->notEnds("\\"_s);
	$nc($($nc($($nc($(test("C:\\a\\b\\c"_s, $$new($StringArray, 0))))->element(0, "a"_s)))->element(1, "b"_s)))->element(2, "c"_s);
	$nc($($nc($(test("foo.bar\\gus.alice"_s, $$new($StringArray, 0))))->element(0, "foo.bar"_s)))->element(1, "gus.alice"_s);
	$nc($(test(""_s, $$new($StringArray, 0))))->element(0, ""_s);
	$nc($(test("C:\\foo"_s, $$new($StringArray, 0))))->subpath(0, 1, "foo"_s);
	$nc($(test("C:foo"_s, $$new($StringArray, 0))))->subpath(0, 1, "foo"_s);
	$nc($(test("foo"_s, $$new($StringArray, 0))))->subpath(0, 1, "foo"_s);
	$nc($($nc($($nc($($nc($($nc($($nc($(test("C:\\foo\\bar\\gus"_s, $$new($StringArray, 0))))->subpath(0, 1, "foo"_s)))->subpath(0, 2, "foo\\bar"_s)))->subpath(0, 3, "foo\\bar\\gus"_s)))->subpath(1, 2, "bar"_s)))->subpath(1, 3, "bar\\gus"_s)))->subpath(2, 3, "gus"_s);
	$nc($(test("\\\\server\\share\\foo"_s, $$new($StringArray, 0))))->subpath(0, 1, "foo"_s);
	$nc($(test(""_s, $$new($StringArray, 0))))->subpath(0, 1, ""_s);
	$nc($(test("foo"_s, $$new($StringArray, 0))))->notAbsolute();
	$nc($(test("C:"_s, $$new($StringArray, 0))))->notAbsolute();
	$nc($(test("C:\\"_s, $$new($StringArray, 0))))->absolute();
	$nc($(test("C:\\abc"_s, $$new($StringArray, 0))))->absolute();
	$nc($(test("\\\\server\\share\\"_s, $$new($StringArray, 0))))->absolute();
	$nc($(test(""_s, $$new($StringArray, 0))))->notAbsolute();
	$nc($(test(cwd)))->absolute();
	$nc($($nc($($nc($($nc($(test(""_s, $$new($StringArray, 0))))->makeAbsolute()))->absolute()))->hasRoot()))->string($($nc(cwd)->toString()));
	$nc($($nc($($nc($($nc($(test("."_s, $$new($StringArray, 0))))->makeAbsolute()))->absolute()))->hasRoot()))->string($$str({$($nc(cwd)->toString()), "\\."_s}));
	$nc($($nc($($nc($($nc($(test("foo"_s, $$new($StringArray, 0))))->makeAbsolute()))->absolute()))->hasRoot()))->string($$str({$($nc(cwd)->toString()), "\\foo"_s}));
	$var($String, rootAsString, $nc($($nc(cwd)->getRoot()))->toString());
	bool var$1 = $nc(rootAsString)->length() == 3;
	bool var$0 = var$1 && rootAsString->charAt(1) == u':';
	if (var$0 && rootAsString->charAt(2) == u'\\') {
		$var($Path, root, $Paths::get($(rootAsString->substring(0, 2)), $$new($StringArray, 0)));
		$nc($($nc($($nc($($nc($(test(root)))->makeAbsolute()))->absolute()))->hasRoot()))->string($(cwd->toString()));
		$nc($($nc($($nc($($nc($(test($$str({root, "."_s}), $$new($StringArray, 0))))->makeAbsolute()))->absolute()))->hasRoot()))->string($$str({$(cwd->toString()), "\\."_s}));
		$nc($($nc($($nc($($nc($(test($$str({root, "foo"_s}), $$new($StringArray, 0))))->makeAbsolute()))->absolute()))->hasRoot()))->string($$str({$(cwd->toString()), "\\foo"_s}));
	}
	$nc($($nc($($nc($($nc($($nc($($nc($(test("C:\\"_s, $$new($StringArray, 0))))->resolve("foo"_s, "C:\\foo"_s)))->resolve("D:\\bar"_s, "D:\\bar"_s)))->resolve("\\\\server\\share\\bar"_s, "\\\\server\\share\\bar"_s)))->resolve("C:foo"_s, "C:\\foo"_s)))->resolve("D:foo"_s, "D:foo"_s)))->resolve(""_s, "C:\\"_s);
	$nc($($nc($($nc($($nc($($nc($($nc($(test("\\"_s, $$new($StringArray, 0))))->resolve("foo"_s, "\\foo"_s)))->resolve("D:bar"_s, "D:bar"_s)))->resolve("C:\\bar"_s, "C:\\bar"_s)))->resolve("\\\\server\\share\\bar"_s, "\\\\server\\share\\bar"_s)))->resolve("\\foo"_s, "\\foo"_s)))->resolve(""_s, "\\"_s);
	$nc($($nc($($nc($($nc($($nc($($nc($(test("\\foo"_s, $$new($StringArray, 0))))->resolve("bar"_s, "\\foo\\bar"_s)))->resolve("D:bar"_s, "D:bar"_s)))->resolve("C:\\bar"_s, "C:\\bar"_s)))->resolve("\\\\server\\share\\bar"_s, "\\\\server\\share\\bar"_s)))->resolve("\\bar"_s, "\\bar"_s)))->resolve(""_s, "\\foo"_s);
	$nc($($nc($($nc($($nc($($nc($($nc($(test("foo"_s, $$new($StringArray, 0))))->resolve("bar"_s, "foo\\bar"_s)))->resolve("D:\\bar"_s, "D:\\bar"_s)))->resolve("\\\\server\\share\\bar"_s, "\\\\server\\share\\bar"_s)))->resolve("C:bar"_s, "C:bar"_s)))->resolve("D:foo"_s, "D:foo"_s)))->resolve(""_s, "foo"_s);
	$nc($($nc($(test("C:"_s, $$new($StringArray, 0))))->resolve("foo"_s, "C:foo"_s)))->resolve(""_s, "C:"_s);
	$nc($($nc($($nc($($nc($($nc($($nc($(test("\\\\server\\share\\foo"_s, $$new($StringArray, 0))))->resolve("bar"_s, "\\\\server\\share\\foo\\bar"_s)))->resolve("\\bar"_s, "\\\\server\\share\\bar"_s)))->resolve("D:\\bar"_s, "D:\\bar"_s)))->resolve("\\\\other\\share\\bar"_s, "\\\\other\\share\\bar"_s)))->resolve("D:bar"_s, "D:bar"_s)))->resolve(""_s, "\\\\server\\share\\foo"_s);
	$nc($($nc($($nc($($nc($($nc($(test(""_s, $$new($StringArray, 0))))->resolve(""_s, ""_s)))->resolve("foo"_s, "foo"_s)))->resolve("C:\\"_s, "C:\\"_s)))->resolve("C:foo"_s, "C:foo"_s)))->resolve("\\\\server\\share\\bar"_s, "\\\\server\\share\\bar"_s);
	$nc($($nc($($nc($($nc($($nc($($nc($(test("foo"_s, $$new($StringArray, 0))))->resolveSibling("bar"_s, "bar"_s)))->resolveSibling("D:\\bar"_s, "D:\\bar"_s)))->resolveSibling("\\\\server\\share\\bar"_s, "\\\\server\\share\\bar"_s)))->resolveSibling("C:bar"_s, "C:bar"_s)))->resolveSibling("D:foo"_s, "D:foo"_s)))->resolveSibling(""_s, ""_s);
	$nc($($nc($($nc($($nc($($nc($($nc($(test("foo\\bar"_s, $$new($StringArray, 0))))->resolveSibling("gus"_s, "foo\\gus"_s)))->resolveSibling("D:\\bar"_s, "D:\\bar"_s)))->resolveSibling("\\\\server\\share\\bar"_s, "\\\\server\\share\\bar"_s)))->resolveSibling("C:bar"_s, "C:bar"_s)))->resolveSibling("D:foo"_s, "D:foo"_s)))->resolveSibling(""_s, "foo"_s);
	$nc($($nc($($nc($($nc($($nc($($nc($(test("C:\\foo"_s, $$new($StringArray, 0))))->resolveSibling("gus"_s, "C:\\gus"_s)))->resolveSibling("D:\\bar"_s, "D:\\bar"_s)))->resolveSibling("\\\\server\\share\\bar"_s, "\\\\server\\share\\bar"_s)))->resolveSibling("C:bar"_s, "C:\\bar"_s)))->resolveSibling("D:foo"_s, "D:foo"_s)))->resolveSibling(""_s, "C:\\"_s);
	$nc($($nc($($nc($($nc($($nc($($nc($(test("C:\\foo\\bar"_s, $$new($StringArray, 0))))->resolveSibling("gus"_s, "C:\\foo\\gus"_s)))->resolveSibling("D:\\bar"_s, "D:\\bar"_s)))->resolveSibling("\\\\server\\share\\bar"_s, "\\\\server\\share\\bar"_s)))->resolveSibling("C:bar"_s, "C:\\foo\\bar"_s)))->resolveSibling("D:foo"_s, "D:foo"_s)))->resolveSibling(""_s, "C:\\foo"_s);
	$nc($($nc($($nc($($nc($($nc($($nc($(test("\\\\server\\share\\foo"_s, $$new($StringArray, 0))))->resolveSibling("bar"_s, "\\\\server\\share\\bar"_s)))->resolveSibling("\\bar"_s, "\\\\server\\share\\bar"_s)))->resolveSibling("D:\\bar"_s, "D:\\bar"_s)))->resolveSibling("\\\\other\\share\\bar"_s, "\\\\other\\share\\bar"_s)))->resolveSibling("D:bar"_s, "D:bar"_s)))->resolveSibling(""_s, "\\\\server\\share\\"_s);
	$nc($($nc($($nc($(test(""_s, $$new($StringArray, 0))))->resolveSibling(""_s, ""_s)))->resolveSibling("foo"_s, "foo"_s)))->resolveSibling("C:\\"_s, "C:\\"_s);
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("C:\\a"_s, $$new($StringArray, 0))))->relativize("C:\\a"_s, ""_s)))->relativize("C:\\"_s, ".."_s)))->relativize("C:\\."_s, ".."_s)))->relativize("C:\\.."_s, ".."_s)))->relativize("C:\\..\\.."_s, ".."_s)))->relativize("C:\\a\\b"_s, "b"_s)))->relativize("C:\\a\\b\\c"_s, "b\\c"_s)))->relativize("C:\\a\\."_s, ""_s)))->relativize("C:\\a\\.."_s, ".."_s)))->relativize("C:\\x"_s, "..\\x"_s)))->relativizeFail("C:x"_s)))->relativizeFail("x"_s)))->relativizeFail("\\"_s)))->relativizeFail(""_s)))->relativizeFail("."_s)))->relativizeFail(".."_s);
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("C:\\a\\b"_s, $$new($StringArray, 0))))->relativize("C:\\a\\b"_s, ""_s)))->relativize("C:\\a"_s, ".."_s)))->relativize("C:\\"_s, "..\\.."_s)))->relativize("C:\\."_s, "..\\.."_s)))->relativize("C:\\.."_s, "..\\.."_s)))->relativize("C:\\..\\.."_s, "..\\.."_s)))->relativize("C:\\a\\b\\c"_s, "c"_s)))->relativize("C:\\a\\."_s, ".."_s)))->relativize("C:\\a\\.."_s, "..\\.."_s)))->relativize("C:\\x"_s, "..\\..\\x"_s)))->relativizeFail("C:x"_s)))->relativizeFail("x"_s)))->relativizeFail("\\"_s)))->relativizeFail(""_s)))->relativizeFail("."_s)))->relativizeFail(".."_s);
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("C:\\a\\b\\c"_s, $$new($StringArray, 0))))->relativize("C:\\a\\b\\c"_s, ""_s)))->relativize("C:\\a\\b"_s, ".."_s)))->relativize("C:\\a"_s, "..\\.."_s)))->relativize("C:\\"_s, "..\\..\\.."_s)))->relativize("C:\\."_s, "..\\..\\.."_s)))->relativize("C:\\.."_s, "..\\..\\.."_s)))->relativize("C:\\..\\.."_s, "..\\..\\.."_s)))->relativize("C:\\..\\..\\.."_s, "..\\..\\.."_s)))->relativize("C:\\..\\..\\..\\.."_s, "..\\..\\.."_s)))->relativize("C:\\a\\b\\c\\d"_s, "d"_s)))->relativize("C:\\a\\b\\c\\d\\e"_s, "d\\e"_s)))->relativize("C:\\a\\b\\c\\."_s, ""_s)))->relativize("C:\\a\\b\\c\\.."_s, ".."_s)))->relativize("C:\\a\\x"_s, "..\\..\\x"_s)))->relativize("C:\\x"_s, "..\\..\\..\\x"_s)))->relativizeFail("C:x"_s)))->relativizeFail("x"_s)))->relativizeFail("\\"_s)))->relativizeFail(""_s)))->relativizeFail("."_s)))->relativizeFail(".."_s);
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("C:\\..\\a"_s, $$new($StringArray, 0))))->relativize("C:\\a"_s, ""_s)))->relativize("C:\\"_s, ".."_s)))->relativize("C:\\."_s, ".."_s)))->relativize("C:\\.."_s, ".."_s)))->relativize("C:\\..\\.."_s, ".."_s)))->relativize("C:\\a\\b"_s, "b"_s)))->relativize("C:\\a\\b\\c"_s, "b\\c"_s)))->relativize("C:\\a\\."_s, ""_s)))->relativize("C:\\a\\.."_s, ".."_s)))->relativize("C:\\x"_s, "..\\x"_s)))->relativizeFail("C:x"_s)))->relativizeFail("x"_s)))->relativizeFail("\\"_s)))->relativizeFail(""_s)))->relativizeFail("."_s)))->relativizeFail(".."_s);
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("C:\\..\\a\\b"_s, $$new($StringArray, 0))))->relativize("C:\\a\\b"_s, ""_s)))->relativize("C:\\a"_s, ".."_s)))->relativize("C:\\"_s, "..\\.."_s)))->relativize("C:\\."_s, "..\\.."_s)))->relativize("C:\\.."_s, "..\\.."_s)))->relativize("C:\\..\\.."_s, "..\\.."_s)))->relativize("C:\\..\\..\\.."_s, "..\\.."_s)))->relativize("C:\\..\\..\\..\\.."_s, "..\\.."_s)))->relativize("C:\\a\\b\\c"_s, "c"_s)))->relativize("C:\\a\\b\\."_s, ""_s)))->relativize("C:\\a\\b\\.."_s, ".."_s)))->relativize("C:\\a\\x"_s, "..\\x"_s)))->relativize("C:\\x"_s, "..\\..\\x"_s)))->relativizeFail("C:x"_s)))->relativizeFail("x"_s)))->relativizeFail("\\"_s)))->relativizeFail(""_s)))->relativizeFail("."_s)))->relativizeFail(".."_s);
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("C:\\..\\..\\a\\b"_s, $$new($StringArray, 0))))->relativize("C:\\a\\b"_s, ""_s)))->relativize("C:\\a"_s, ".."_s)))->relativize("C:\\"_s, "..\\.."_s)))->relativize("C:\\."_s, "..\\.."_s)))->relativize("C:\\.."_s, "..\\.."_s)))->relativize("C:\\..\\.."_s, "..\\.."_s)))->relativize("C:\\..\\..\\.."_s, "..\\.."_s)))->relativize("C:\\..\\..\\..\\.."_s, "..\\.."_s)))->relativize("C:\\a\\b\\c"_s, "c"_s)))->relativize("C:\\a\\b\\."_s, ""_s)))->relativize("C:\\a\\b\\.."_s, ".."_s)))->relativize("C:\\a\\x"_s, "..\\x"_s)))->relativize("C:\\x"_s, "..\\..\\x"_s)))->relativizeFail("C:x"_s)))->relativizeFail("x"_s)))->relativizeFail("\\"_s)))->relativizeFail(""_s)))->relativizeFail("."_s)))->relativizeFail(".."_s);
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("C:\\..\\a\\b\\c"_s, $$new($StringArray, 0))))->relativize("C:\\a\\b\\c"_s, ""_s)))->relativize("C:\\a\\b"_s, ".."_s)))->relativize("C:\\a"_s, "..\\.."_s)))->relativize("C:\\"_s, "..\\..\\.."_s)))->relativize("C:\\."_s, "..\\..\\.."_s)))->relativize("C:\\.."_s, "..\\..\\.."_s)))->relativize("C:\\..\\.."_s, "..\\..\\.."_s)))->relativize("C:\\..\\..\\.."_s, "..\\..\\.."_s)))->relativize("C:\\..\\..\\..\\.."_s, "..\\..\\.."_s)))->relativize("C:\\a\\b\\c\\d"_s, "d"_s)))->relativize("C:\\a\\b\\c\\d\\e"_s, "d\\e"_s)))->relativize("C:\\a\\b\\c\\."_s, ""_s)))->relativize("C:\\a\\b\\c\\.."_s, ".."_s)))->relativize("C:\\a\\x"_s, "..\\..\\x"_s)))->relativize("C:\\x"_s, "..\\..\\..\\x"_s)))->relativizeFail("C:x"_s)))->relativizeFail("x"_s)))->relativizeFail("\\"_s)))->relativizeFail(""_s)))->relativizeFail("."_s)))->relativizeFail(".."_s);
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("C:\\..\\..\\a\\b\\c"_s, $$new($StringArray, 0))))->relativize("C:\\a\\b\\c"_s, ""_s)))->relativize("C:\\a\\b"_s, ".."_s)))->relativize("C:\\a"_s, "..\\.."_s)))->relativize("C:\\"_s, "..\\..\\.."_s)))->relativize("C:\\."_s, "..\\..\\.."_s)))->relativize("C:\\.."_s, "..\\..\\.."_s)))->relativize("C:\\..\\.."_s, "..\\..\\.."_s)))->relativize("C:\\..\\..\\.."_s, "..\\..\\.."_s)))->relativize("C:\\..\\..\\..\\.."_s, "..\\..\\.."_s)))->relativize("C:\\a\\b\\c\\d"_s, "d"_s)))->relativize("C:\\a\\b\\c\\d\\e"_s, "d\\e"_s)))->relativize("C:\\a\\b\\c\\."_s, ""_s)))->relativize("C:\\a\\b\\c\\.."_s, ".."_s)))->relativize("C:\\a\\x"_s, "..\\..\\x"_s)))->relativize("C:\\x"_s, "..\\..\\..\\x"_s)))->relativizeFail("C:x"_s)))->relativizeFail("x"_s)))->relativizeFail("\\"_s)))->relativizeFail(""_s)))->relativizeFail("."_s)))->relativizeFail(".."_s);
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("C:\\..\\..\\..\\a\\b\\c"_s, $$new($StringArray, 0))))->relativize("C:\\a\\b\\c"_s, ""_s)))->relativize("C:\\a\\b"_s, ".."_s)))->relativize("C:\\a"_s, "..\\.."_s)))->relativize("C:\\"_s, "..\\..\\.."_s)))->relativize("C:\\."_s, "..\\..\\.."_s)))->relativize("C:\\.."_s, "..\\..\\.."_s)))->relativize("C:\\..\\.."_s, "..\\..\\.."_s)))->relativize("C:\\..\\..\\.."_s, "..\\..\\.."_s)))->relativize("C:\\..\\..\\..\\.."_s, "..\\..\\.."_s)))->relativize("C:\\a\\b\\c\\d"_s, "d"_s)))->relativize("C:\\a\\b\\c\\d\\e"_s, "d\\e"_s)))->relativize("C:\\a\\b\\c\\."_s, ""_s)))->relativize("C:\\a\\b\\c\\.."_s, ".."_s)))->relativize("C:\\a\\x"_s, "..\\..\\x"_s)))->relativize("C:\\x"_s, "..\\..\\..\\x"_s)))->relativizeFail("C:x"_s)))->relativizeFail("x"_s)))->relativizeFail("\\"_s)))->relativizeFail(""_s)))->relativizeFail("."_s)))->relativizeFail(".."_s);
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("C:\\.\\a"_s, $$new($StringArray, 0))))->relativize("C:\\a"_s, ""_s)))->relativize("C:\\"_s, ".."_s)))->relativize("C:\\."_s, ".."_s)))->relativize("C:\\.."_s, ".."_s)))->relativize("C:\\..\\.."_s, ".."_s)))->relativize("C:\\a\\b"_s, "b"_s)))->relativize("C:\\a\\b\\c"_s, "b\\c"_s)))->relativize("C:\\a\\."_s, ""_s)))->relativize("C:\\a\\.."_s, ".."_s)))->relativize("C:\\x"_s, "..\\x"_s)))->relativizeFail("C:x"_s)))->relativizeFail("x"_s)))->relativizeFail("\\"_s)))->relativizeFail(""_s)))->relativizeFail("."_s)))->relativizeFail(".."_s);
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("C:\\..\\a"_s, $$new($StringArray, 0))))->relativize("C:\\a"_s, ""_s)))->relativize("C:\\"_s, ".."_s)))->relativize("C:\\."_s, ".."_s)))->relativize("C:\\.."_s, ".."_s)))->relativize("C:\\..\\.."_s, ".."_s)))->relativize("C:\\a\\b"_s, "b"_s)))->relativize("C:\\a\\b\\c"_s, "b\\c"_s)))->relativize("C:\\a\\."_s, ""_s)))->relativize("C:\\a\\.."_s, ".."_s)))->relativize("C:\\x"_s, "..\\x"_s)))->relativizeFail("C:x"_s)))->relativizeFail("x"_s)))->relativizeFail("\\"_s)))->relativizeFail(""_s)))->relativizeFail("."_s)))->relativizeFail(".."_s);
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("C:\\a\\.."_s, $$new($StringArray, 0))))->relativize("C:\\a"_s, "a"_s)))->relativize("C:\\"_s, ""_s)))->relativize("C:\\."_s, ""_s)))->relativize("C:\\.."_s, ""_s)))->relativize("C:\\..\\.."_s, ""_s)))->relativize("C:\\a\\."_s, "a"_s)))->relativize("C:\\a\\.."_s, ""_s)))->relativize("C:\\x"_s, "x"_s)))->relativizeFail("C:x"_s)))->relativizeFail("x"_s)))->relativizeFail("\\"_s)))->relativizeFail(""_s)))->relativizeFail("."_s)))->relativizeFail(".."_s);
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("C:a"_s, $$new($StringArray, 0))))->relativize("C:a"_s, ""_s)))->relativize("C:"_s, ".."_s)))->relativize("C:."_s, ".."_s)))->relativize("C:.."_s, "..\\.."_s)))->relativize("C:..\\.."_s, "..\\..\\.."_s)))->relativize("C:.\\.."_s, "..\\.."_s)))->relativize("C:a\\b"_s, "b"_s)))->relativize("C:a\\b\\c"_s, "b\\c"_s)))->relativize("C:..\\x"_s, "..\\..\\x"_s)))->relativizeFail("C:\\x"_s)))->relativizeFail("x"_s)))->relativizeFail("\\"_s)))->relativizeFail("\\x"_s);
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("C:a\\b"_s, $$new($StringArray, 0))))->relativize("C:a\\b"_s, ""_s)))->relativize("C:a"_s, ".."_s)))->relativize("C:"_s, "..\\.."_s)))->relativize("C:."_s, "..\\.."_s)))->relativize("C:.."_s, "..\\..\\.."_s)))->relativize("C:..\\.."_s, "..\\..\\..\\.."_s)))->relativize("C:.\\.."_s, "..\\..\\.."_s)))->relativize("C:a\\b\\c"_s, "c"_s)))->relativize("C:..\\x"_s, "..\\..\\..\\x"_s)))->relativizeFail("C:\\x"_s)))->relativizeFail("x"_s)))->relativizeFail("\\"_s)))->relativizeFail("\\x"_s);
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("C:a\\b\\c"_s, $$new($StringArray, 0))))->relativize("C:a\\b\\c"_s, ""_s)))->relativize("C:a\\b"_s, ".."_s)))->relativize("C:a"_s, "..\\.."_s)))->relativize("C:"_s, "..\\..\\.."_s)))->relativize("C:."_s, "..\\..\\.."_s)))->relativize("C:.."_s, "..\\..\\..\\.."_s)))->relativize("C:..\\.."_s, "..\\..\\..\\..\\.."_s)))->relativize("C:.\\.."_s, "..\\..\\..\\.."_s)))->relativize("C:a\\b\\c\\d"_s, "d"_s)))->relativize("C:a\\b\\c\\d\\e"_s, "d\\e"_s)))->relativize("C:a\\x"_s, "..\\..\\x"_s)))->relativize("C:..\\x"_s, "..\\..\\..\\..\\x"_s)))->relativizeFail("C:\\x"_s)))->relativizeFail("x"_s)))->relativizeFail("\\"_s)))->relativizeFail("\\x"_s);
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("C:"_s, $$new($StringArray, 0))))->relativize("C:a"_s, "a"_s)))->relativize("C:a\\b\\c"_s, "a\\b\\c"_s)))->relativize("C:"_s, ""_s)))->relativize("C:."_s, ""_s)))->relativize("C:.."_s, ".."_s)))->relativize("C:..\\.."_s, "..\\.."_s)))->relativize("C:.\\.."_s, ".."_s)))->relativizeFail("C:\\x"_s)))->relativizeFail("\\"_s)))->relativizeFail("\\x"_s);
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("C:.."_s, $$new($StringArray, 0))))->relativize("C:..\\a"_s, "a"_s)))->relativize("C:.."_s, ""_s)))->relativize("C:.\\.."_s, ""_s)))->relativizeFail("C:\\x"_s)))->relativizeFail("\\"_s)))->relativizeFail("\\x"_s)))->relativizeFail(""_s)))->relativizeFail("."_s)))->relativizeFail("x"_s);
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("C:..\\a"_s, $$new($StringArray, 0))))->relativize("C:..\\a\\b"_s, "b"_s)))->relativize("C:..\\a"_s, ""_s)))->relativize("C:.."_s, ".."_s)))->relativize("C:.\\.."_s, ".."_s)))->relativizeFail("C:\\x"_s)))->relativizeFail("\\"_s)))->relativizeFail("\\x"_s)))->relativizeFail(""_s)))->relativizeFail("."_s)))->relativizeFail("x"_s);
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("C:..\\a\\b"_s, $$new($StringArray, 0))))->relativize("C:..\\a\\b\\c"_s, "c"_s)))->relativize("C:..\\a\\b"_s, ""_s)))->relativize("C:..\\a"_s, ".."_s)))->relativize("C:.."_s, "..\\.."_s)))->relativize("C:.\\.."_s, "..\\.."_s)))->relativizeFail("C:\\x"_s)))->relativizeFail("\\"_s)))->relativizeFail("\\x"_s)))->relativizeFail(""_s)))->relativizeFail("x"_s);
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("C:a\\.."_s, $$new($StringArray, 0))))->relativize("C:b"_s, "b"_s)))->relativize("C:"_s, ""_s)))->relativize("C:."_s, ""_s)))->relativize("C:.."_s, ".."_s)))->relativize("C:a\\..\\b"_s, "b"_s)))->relativize("C:a\\.."_s, ""_s)))->relativize("C:..\\b"_s, "..\\b"_s)))->relativize("C:b\\.."_s, ""_s)))->relativizeFail("C:\\x"_s)))->relativizeFail("\\"_s)))->relativizeFail("\\x"_s)))->relativizeFail("x"_s);
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("C:a\\..\\b"_s, $$new($StringArray, 0))))->relativize("C:a\\..\\b"_s, ""_s)))->relativize("C:a\\.."_s, ".."_s)))->relativize("C:"_s, ".."_s)))->relativize("C:."_s, ".."_s)))->relativize("C:.."_s, "..\\.."_s)))->relativize("C:b"_s, ""_s)))->relativize("C:c"_s, "..\\c"_s)))->relativize("C:..\\c"_s, "..\\..\\c"_s)))->relativize("C:a\\..\\b\\c"_s, "c"_s)))->relativizeFail("C:\\x"_s)))->relativizeFail("\\"_s)))->relativizeFail("\\x"_s)))->relativizeFail("x"_s);
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("\\a"_s, $$new($StringArray, 0))))->relativize("\\a"_s, ""_s)))->relativize("\\"_s, ".."_s)))->relativize("\\."_s, ".."_s)))->relativize("\\.."_s, ".."_s)))->relativize("\\..\\.."_s, ".."_s)))->relativize("\\a\\b"_s, "b"_s)))->relativize("\\a\\b\\c"_s, "b\\c"_s)))->relativize("\\a\\."_s, ""_s)))->relativize("\\a\\.."_s, ".."_s)))->relativize("\\x"_s, "..\\x"_s)))->relativizeFail("C:\\x"_s)))->relativizeFail("C:x"_s)))->relativizeFail("x"_s)))->relativizeFail(""_s)))->relativizeFail("."_s)))->relativizeFail(".."_s);
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("\\a\\b"_s, $$new($StringArray, 0))))->relativize("\\a\\b"_s, ""_s)))->relativize("\\a"_s, ".."_s)))->relativize("\\"_s, "..\\.."_s)))->relativize("\\."_s, "..\\.."_s)))->relativize("\\.."_s, "..\\.."_s)))->relativize("\\..\\.."_s, "..\\.."_s)))->relativize("\\a\\b\\c"_s, "c"_s)))->relativize("\\a\\."_s, ".."_s)))->relativize("\\a\\.."_s, "..\\.."_s)))->relativize("\\x"_s, "..\\..\\x"_s)))->relativizeFail("C:\\x"_s)))->relativizeFail("C:x"_s)))->relativizeFail("x"_s)))->relativizeFail(""_s)))->relativizeFail("."_s)))->relativizeFail(".."_s);
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("\\a\\b\\c"_s, $$new($StringArray, 0))))->relativize("\\a\\b\\c"_s, ""_s)))->relativize("\\a\\b"_s, ".."_s)))->relativize("\\a"_s, "..\\.."_s)))->relativize("\\"_s, "..\\..\\.."_s)))->relativize("\\."_s, "..\\..\\.."_s)))->relativize("\\.."_s, "..\\..\\.."_s)))->relativize("\\..\\.."_s, "..\\..\\.."_s)))->relativize("\\..\\..\\.."_s, "..\\..\\.."_s)))->relativize("\\..\\..\\..\\.."_s, "..\\..\\.."_s)))->relativize("\\a\\b\\c\\d"_s, "d"_s)))->relativize("\\a\\b\\c\\d\\e"_s, "d\\e"_s)))->relativize("\\a\\b\\c\\."_s, ""_s)))->relativize("\\a\\b\\c\\.."_s, ".."_s)))->relativize("\\a\\x"_s, "..\\..\\x"_s)))->relativize("\\x"_s, "..\\..\\..\\x"_s)))->relativizeFail("C:\\x"_s)))->relativizeFail("C:x"_s)))->relativizeFail("x"_s)))->relativizeFail(""_s)))->relativizeFail("."_s)))->relativizeFail(".."_s);
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("\\..\\a"_s, $$new($StringArray, 0))))->relativize("\\a"_s, ""_s)))->relativize("\\"_s, ".."_s)))->relativize("\\."_s, ".."_s)))->relativize("\\.."_s, ".."_s)))->relativize("\\..\\.."_s, ".."_s)))->relativize("\\a\\b"_s, "b"_s)))->relativize("\\a\\b\\c"_s, "b\\c"_s)))->relativize("\\a\\."_s, ""_s)))->relativize("\\a\\.."_s, ".."_s)))->relativize("\\x"_s, "..\\x"_s)))->relativizeFail("C:\\x"_s)))->relativizeFail("C:x"_s)))->relativizeFail("x"_s)))->relativizeFail(""_s)))->relativizeFail("."_s)))->relativizeFail(".."_s);
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("\\..\\a\\b"_s, $$new($StringArray, 0))))->relativize("\\a\\b"_s, ""_s)))->relativize("\\a"_s, ".."_s)))->relativize("\\"_s, "..\\.."_s)))->relativize("\\."_s, "..\\.."_s)))->relativize("\\.."_s, "..\\.."_s)))->relativize("\\..\\.."_s, "..\\.."_s)))->relativize("\\..\\..\\.."_s, "..\\.."_s)))->relativize("\\..\\..\\..\\.."_s, "..\\.."_s)))->relativize("\\a\\b\\c"_s, "c"_s)))->relativize("\\a\\b\\."_s, ""_s)))->relativize("\\a\\b\\.."_s, ".."_s)))->relativize("\\a\\x"_s, "..\\x"_s)))->relativize("\\x"_s, "..\\..\\x"_s)))->relativizeFail("C:\\x"_s)))->relativizeFail("C:x"_s)))->relativizeFail("x"_s)))->relativizeFail(""_s)))->relativizeFail("."_s)))->relativizeFail(".."_s);
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("\\..\\..\\a\\b"_s, $$new($StringArray, 0))))->relativize("\\a\\b"_s, ""_s)))->relativize("\\a"_s, ".."_s)))->relativize("\\"_s, "..\\.."_s)))->relativize("\\."_s, "..\\.."_s)))->relativize("\\.."_s, "..\\.."_s)))->relativize("\\..\\.."_s, "..\\.."_s)))->relativize("\\..\\..\\.."_s, "..\\.."_s)))->relativize("\\..\\..\\..\\.."_s, "..\\.."_s)))->relativize("\\a\\b\\c"_s, "c"_s)))->relativize("\\a\\b\\."_s, ""_s)))->relativize("\\a\\b\\.."_s, ".."_s)))->relativize("\\a\\x"_s, "..\\x"_s)))->relativize("\\x"_s, "..\\..\\x"_s)))->relativizeFail("C:\\x"_s)))->relativizeFail("C:x"_s)))->relativizeFail("x"_s)))->relativizeFail(""_s)))->relativizeFail("."_s)))->relativizeFail(".."_s);
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("\\..\\a\\b\\c"_s, $$new($StringArray, 0))))->relativize("\\a\\b\\c"_s, ""_s)))->relativize("\\a\\b"_s, ".."_s)))->relativize("\\a"_s, "..\\.."_s)))->relativize("\\"_s, "..\\..\\.."_s)))->relativize("\\."_s, "..\\..\\.."_s)))->relativize("\\.."_s, "..\\..\\.."_s)))->relativize("\\..\\.."_s, "..\\..\\.."_s)))->relativize("\\..\\..\\.."_s, "..\\..\\.."_s)))->relativize("\\..\\..\\..\\.."_s, "..\\..\\.."_s)))->relativize("\\a\\b\\c\\d"_s, "d"_s)))->relativize("\\a\\b\\c\\d\\e"_s, "d\\e"_s)))->relativize("\\a\\b\\c\\."_s, ""_s)))->relativize("\\a\\b\\c\\.."_s, ".."_s)))->relativize("\\a\\x"_s, "..\\..\\x"_s)))->relativize("\\x"_s, "..\\..\\..\\x"_s)))->relativizeFail("C:\\x"_s)))->relativizeFail("C:x"_s)))->relativizeFail("x"_s)))->relativizeFail(""_s)))->relativizeFail("."_s)))->relativizeFail(".."_s);
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("\\..\\..\\a\\b\\c"_s, $$new($StringArray, 0))))->relativize("\\a\\b\\c"_s, ""_s)))->relativize("\\a\\b"_s, ".."_s)))->relativize("\\a"_s, "..\\.."_s)))->relativize("\\"_s, "..\\..\\.."_s)))->relativize("\\."_s, "..\\..\\.."_s)))->relativize("\\.."_s, "..\\..\\.."_s)))->relativize("\\..\\.."_s, "..\\..\\.."_s)))->relativize("\\..\\..\\.."_s, "..\\..\\.."_s)))->relativize("\\..\\..\\..\\.."_s, "..\\..\\.."_s)))->relativize("\\a\\b\\c\\d"_s, "d"_s)))->relativize("\\a\\b\\c\\d\\e"_s, "d\\e"_s)))->relativize("\\a\\b\\c\\."_s, ""_s)))->relativize("\\a\\b\\c\\.."_s, ".."_s)))->relativize("\\a\\x"_s, "..\\..\\x"_s)))->relativize("\\x"_s, "..\\..\\..\\x"_s)))->relativizeFail("C:\\x"_s)))->relativizeFail("C:x"_s)))->relativizeFail("x"_s)))->relativizeFail(""_s)))->relativizeFail("."_s)))->relativizeFail(".."_s);
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("\\..\\..\\..\\a\\b\\c"_s, $$new($StringArray, 0))))->relativize("\\a\\b\\c"_s, ""_s)))->relativize("\\a\\b"_s, ".."_s)))->relativize("\\a"_s, "..\\.."_s)))->relativize("\\"_s, "..\\..\\.."_s)))->relativize("\\."_s, "..\\..\\.."_s)))->relativize("\\.."_s, "..\\..\\.."_s)))->relativize("\\..\\.."_s, "..\\..\\.."_s)))->relativize("\\..\\..\\.."_s, "..\\..\\.."_s)))->relativize("\\..\\..\\..\\.."_s, "..\\..\\.."_s)))->relativize("\\a\\b\\c\\d"_s, "d"_s)))->relativize("\\a\\b\\c\\d\\e"_s, "d\\e"_s)))->relativize("\\a\\b\\c\\."_s, ""_s)))->relativize("\\a\\b\\c\\.."_s, ".."_s)))->relativize("\\a\\x"_s, "..\\..\\x"_s)))->relativize("\\x"_s, "..\\..\\..\\x"_s)))->relativizeFail("C:\\x"_s)))->relativizeFail("C:x"_s)))->relativizeFail("x"_s)))->relativizeFail(""_s)))->relativizeFail("."_s)))->relativizeFail(".."_s);
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("\\.\\a"_s, $$new($StringArray, 0))))->relativize("\\a"_s, ""_s)))->relativize("\\"_s, ".."_s)))->relativize("\\."_s, ".."_s)))->relativize("\\.."_s, ".."_s)))->relativize("\\..\\.."_s, ".."_s)))->relativize("\\a\\b"_s, "b"_s)))->relativize("\\a\\b\\c"_s, "b\\c"_s)))->relativize("\\a\\."_s, ""_s)))->relativize("\\a\\.."_s, ".."_s)))->relativize("\\x"_s, "..\\x"_s)))->relativizeFail("C:\\x"_s)))->relativizeFail("C:x"_s)))->relativizeFail("x"_s)))->relativizeFail(""_s)))->relativizeFail("."_s)))->relativizeFail(".."_s);
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("\\..\\a"_s, $$new($StringArray, 0))))->relativize("\\a"_s, ""_s)))->relativize("\\"_s, ".."_s)))->relativize("\\."_s, ".."_s)))->relativize("\\.."_s, ".."_s)))->relativize("\\..\\.."_s, ".."_s)))->relativize("\\a\\b"_s, "b"_s)))->relativize("\\a\\b\\c"_s, "b\\c"_s)))->relativize("\\a\\."_s, ""_s)))->relativize("\\a\\.."_s, ".."_s)))->relativize("\\x"_s, "..\\x"_s)))->relativizeFail("C:\\x"_s)))->relativizeFail("C:x"_s)))->relativizeFail("x"_s)))->relativizeFail(""_s)))->relativizeFail("."_s)))->relativizeFail(".."_s);
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("\\a\\.."_s, $$new($StringArray, 0))))->relativize("\\a"_s, "a"_s)))->relativize("\\"_s, ""_s)))->relativize("\\."_s, ""_s)))->relativize("\\.."_s, ""_s)))->relativize("\\..\\.."_s, ""_s)))->relativize("\\a\\."_s, "a"_s)))->relativize("\\a\\.."_s, ""_s)))->relativize("\\x"_s, "x"_s)))->relativizeFail("C:\\x"_s)))->relativizeFail("C:x"_s)))->relativizeFail("x"_s)))->relativizeFail(""_s)))->relativizeFail("."_s)))->relativizeFail(".."_s);
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("\\"_s, $$new($StringArray, 0))))->relativize("\\a"_s, "a"_s)))->relativize("\\"_s, ""_s)))->relativize("\\."_s, ""_s)))->relativize("\\.."_s, ""_s)))->relativize("\\..\\.."_s, ""_s)))->relativize("\\a\\."_s, "a"_s)))->relativize("\\a\\.."_s, ""_s)))->relativize("\\x"_s, "x"_s)))->relativizeFail("C:\\x"_s)))->relativizeFail("C:x"_s)))->relativizeFail("x"_s)))->relativizeFail(""_s)))->relativizeFail("."_s)))->relativizeFail(".."_s);
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("a"_s, $$new($StringArray, 0))))->relativize("a"_s, ""_s)))->relativize(""_s, ".."_s)))->relativize("."_s, ".."_s)))->relativize(".."_s, "..\\.."_s)))->relativize("..\\.."_s, "..\\..\\.."_s)))->relativize(".\\.."_s, "..\\.."_s)))->relativize("a\\b"_s, "b"_s)))->relativize("a\\b\\c"_s, "b\\c"_s)))->relativize("..\\x"_s, "..\\..\\x"_s)))->relativizeFail("C:\\x"_s)))->relativizeFail("C:x"_s)))->relativizeFail("\\"_s)))->relativizeFail("\\x"_s);
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("a\\b"_s, $$new($StringArray, 0))))->relativize("a\\b"_s, ""_s)))->relativize("a"_s, ".."_s)))->relativize(""_s, "..\\.."_s)))->relativize("."_s, "..\\.."_s)))->relativize(".."_s, "..\\..\\.."_s)))->relativize("..\\.."_s, "..\\..\\..\\.."_s)))->relativize(".\\.."_s, "..\\..\\.."_s)))->relativize("a\\b\\c"_s, "c"_s)))->relativize("..\\x"_s, "..\\..\\..\\x"_s)))->relativizeFail("C:\\x"_s)))->relativizeFail("C:x"_s)))->relativizeFail("\\"_s)))->relativizeFail("\\x"_s);
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("a\\b\\c"_s, $$new($StringArray, 0))))->relativize("a\\b\\c"_s, ""_s)))->relativize("a\\b"_s, ".."_s)))->relativize("a"_s, "..\\.."_s)))->relativize(""_s, "..\\..\\.."_s)))->relativize("."_s, "..\\..\\.."_s)))->relativize(".."_s, "..\\..\\..\\.."_s)))->relativize("..\\.."_s, "..\\..\\..\\..\\.."_s)))->relativize(".\\.."_s, "..\\..\\..\\.."_s)))->relativize("a\\b\\c\\d"_s, "d"_s)))->relativize("a\\b\\c\\d\\e"_s, "d\\e"_s)))->relativize("a\\x"_s, "..\\..\\x"_s)))->relativize("..\\x"_s, "..\\..\\..\\..\\x"_s)))->relativizeFail("C:\\x"_s)))->relativizeFail("C:x"_s)))->relativizeFail("\\"_s)))->relativizeFail("\\x"_s);
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test(""_s, $$new($StringArray, 0))))->relativize("a"_s, "a"_s)))->relativize("a\\b\\c"_s, "a\\b\\c"_s)))->relativize(""_s, ""_s)))->relativize("."_s, "."_s)))->relativize(".."_s, ".."_s)))->relativize("..\\.."_s, "..\\.."_s)))->relativize(".\\.."_s, ".\\.."_s)))->relativizeFail("\\"_s)))->relativizeFail("\\x"_s);
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test(".."_s, $$new($StringArray, 0))))->relativize("..\\a"_s, "a"_s)))->relativize(".."_s, ""_s)))->relativize(".\\.."_s, ""_s)))->relativizeFail("C:\\x"_s)))->relativizeFail("C:x"_s)))->relativizeFail("\\"_s)))->relativizeFail("\\x"_s)))->relativizeFail(""_s)))->relativizeFail("."_s)))->relativizeFail("x"_s);
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("..\\a"_s, $$new($StringArray, 0))))->relativize("..\\a\\b"_s, "b"_s)))->relativize("..\\a"_s, ""_s)))->relativize(".."_s, ".."_s)))->relativize(".\\.."_s, ".."_s)))->relativizeFail("C:\\x"_s)))->relativizeFail("C:x"_s)))->relativizeFail("\\"_s)))->relativizeFail("\\x"_s)))->relativizeFail(""_s)))->relativizeFail("."_s)))->relativizeFail("x"_s);
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("..\\a\\b"_s, $$new($StringArray, 0))))->relativize("..\\a\\b\\c"_s, "c"_s)))->relativize("..\\a\\b"_s, ""_s)))->relativize("..\\a"_s, ".."_s)))->relativize(".."_s, "..\\.."_s)))->relativize(".\\.."_s, "..\\.."_s)))->relativizeFail("C:\\x"_s)))->relativizeFail("C:x"_s)))->relativizeFail("\\"_s)))->relativizeFail("\\x"_s)))->relativizeFail(""_s)))->relativizeFail("x"_s);
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("a\\.."_s, $$new($StringArray, 0))))->relativize("b"_s, "b"_s)))->relativize(""_s, ""_s)))->relativize("."_s, ""_s)))->relativize(".."_s, ".."_s)))->relativize("a\\..\\b"_s, "b"_s)))->relativize("a\\.."_s, ""_s)))->relativize("..\\b"_s, "..\\b"_s)))->relativize("b\\.."_s, ""_s)))->relativizeFail("C:\\x"_s)))->relativizeFail("C:x"_s)))->relativizeFail("\\"_s)))->relativizeFail("\\x"_s);
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("a\\..\\b"_s, $$new($StringArray, 0))))->relativize("a\\..\\b"_s, ""_s)))->relativize("a\\.."_s, ".."_s)))->relativize(""_s, ".."_s)))->relativize("."_s, ".."_s)))->relativize(".."_s, "..\\.."_s)))->relativize("b"_s, ""_s)))->relativize("c"_s, "..\\c"_s)))->relativize("..\\c"_s, "..\\..\\c"_s)))->relativize("a\\..\\b\\c"_s, "c"_s)))->relativizeFail("C:\\x"_s)))->relativizeFail("C:x"_s)))->relativizeFail("\\"_s)))->relativizeFail("\\x"_s);
	$nc($(test("C:\\"_s, $$new($StringArray, 0))))->normalize("C:\\"_s);
	$nc($(test("C:\\."_s, $$new($StringArray, 0))))->normalize("C:\\"_s);
	$nc($(test("C:\\.."_s, $$new($StringArray, 0))))->normalize("C:\\"_s);
	$nc($(test("\\\\server\\share"_s, $$new($StringArray, 0))))->normalize("\\\\server\\share\\"_s);
	$nc($(test("\\\\server\\share\\."_s, $$new($StringArray, 0))))->normalize("\\\\server\\share\\"_s);
	$nc($(test("\\\\server\\share\\.."_s, $$new($StringArray, 0))))->normalize("\\\\server\\share\\"_s);
	$nc($(test("C:"_s, $$new($StringArray, 0))))->normalize("C:"_s);
	$nc($(test("C:."_s, $$new($StringArray, 0))))->normalize("C:"_s);
	$nc($(test("C:.."_s, $$new($StringArray, 0))))->normalize("C:.."_s);
	$nc($(test("\\"_s, $$new($StringArray, 0))))->normalize("\\"_s);
	$nc($(test("\\."_s, $$new($StringArray, 0))))->normalize("\\"_s);
	$nc($(test("\\.."_s, $$new($StringArray, 0))))->normalize("\\"_s);
	$nc($(test("foo"_s, $$new($StringArray, 0))))->normalize("foo"_s);
	$nc($(test("foo\\."_s, $$new($StringArray, 0))))->normalize("foo"_s);
	$nc($(test("foo\\.."_s, $$new($StringArray, 0))))->normalize(""_s);
	$nc($(test("C:\\foo"_s, $$new($StringArray, 0))))->normalize("C:\\foo"_s);
	$nc($(test("C:\\foo\\."_s, $$new($StringArray, 0))))->normalize("C:\\foo"_s);
	$nc($(test("C:\\.\\foo"_s, $$new($StringArray, 0))))->normalize("C:\\foo"_s);
	$nc($(test("C:\\foo\\.."_s, $$new($StringArray, 0))))->normalize("C:\\"_s);
	$nc($(test("C:\\..\\foo"_s, $$new($StringArray, 0))))->normalize("C:\\foo"_s);
	$nc($(test("\\\\server\\share\\foo"_s, $$new($StringArray, 0))))->normalize("\\\\server\\share\\foo"_s);
	$nc($(test("\\\\server\\share\\foo\\."_s, $$new($StringArray, 0))))->normalize("\\\\server\\share\\foo"_s);
	$nc($(test("\\\\server\\share\\.\\foo"_s, $$new($StringArray, 0))))->normalize("\\\\server\\share\\foo"_s);
	$nc($(test("\\\\server\\share\\foo\\.."_s, $$new($StringArray, 0))))->normalize("\\\\server\\share\\"_s);
	$nc($(test("\\\\server\\share\\..\\foo"_s, $$new($StringArray, 0))))->normalize("\\\\server\\share\\foo"_s);
	$nc($(test("C:foo"_s, $$new($StringArray, 0))))->normalize("C:foo"_s);
	$nc($(test("C:foo\\."_s, $$new($StringArray, 0))))->normalize("C:foo"_s);
	$nc($(test("C:.\\foo"_s, $$new($StringArray, 0))))->normalize("C:foo"_s);
	$nc($(test("C:foo\\.."_s, $$new($StringArray, 0))))->normalize("C:"_s);
	$nc($(test("C:..\\foo"_s, $$new($StringArray, 0))))->normalize("C:..\\foo"_s);
	$nc($(test("\\foo"_s, $$new($StringArray, 0))))->normalize("\\foo"_s);
	$nc($(test("\\foo\\."_s, $$new($StringArray, 0))))->normalize("\\foo"_s);
	$nc($(test("\\.\\foo"_s, $$new($StringArray, 0))))->normalize("\\foo"_s);
	$nc($(test("\\foo\\.."_s, $$new($StringArray, 0))))->normalize("\\"_s);
	$nc($(test("\\..\\foo"_s, $$new($StringArray, 0))))->normalize("\\foo"_s);
	$nc($(test("."_s, $$new($StringArray, 0))))->normalize(""_s);
	$nc($(test(".."_s, $$new($StringArray, 0))))->normalize(".."_s);
	$nc($(test("\\..\\.."_s, $$new($StringArray, 0))))->normalize("\\"_s);
	$nc($(test("..\\..\\foo"_s, $$new($StringArray, 0))))->normalize("..\\..\\foo"_s);
	$nc($(test("foo\\bar\\.."_s, $$new($StringArray, 0))))->normalize("foo"_s);
	$nc($(test("foo\\bar\\.\\.."_s, $$new($StringArray, 0))))->normalize("foo"_s);
	$nc($(test("foo\\bar\\gus\\..\\.."_s, $$new($StringArray, 0))))->normalize("foo"_s);
	$nc($(test(".\\foo\\.\\bar\\.\\gus\\..\\.\\.."_s, $$new($StringArray, 0))))->normalize("foo"_s);
	$nc($(test(""_s, $$new($StringArray, 0))))->normalize(""_s);
	$nc($($nc($($nc($(test("\\\\server\\share\\"_s, $$new($StringArray, 0))))->root("\\\\server\\share\\"_s)))->parent(nullptr)))->name(nullptr);
	$nc($(test("\\\\server"_s, $$new($StringArray, 0))))->invalid();
	$nc($(test("\\\\server\\"_s, $$new($StringArray, 0))))->invalid();
	$nc($($nc($($nc($(test("\\\\server\\share"_s, $$new($StringArray, 0))))->root("\\\\server\\share\\"_s)))->parent(nullptr)))->name(nullptr);
	$nc($(test(":\\foo"_s, $$new($StringArray, 0))))->invalid();
	$nc($(test("C::"_s, $$new($StringArray, 0))))->invalid();
	$nc($(test("C:\\?"_s, $$new($StringArray, 0))))->invalid();
	$nc($(test("C:\\*"_s, $$new($StringArray, 0))))->invalid();
	$nc($(test("C:\\abc\u0001\\foo"_s, $$new($StringArray, 0))))->invalid();
	$nc($(test("C:\\\u0019\\foo"_s, $$new($StringArray, 0))))->invalid();
	$nc($(test("\\\\server\u0019\\share"_s, $$new($StringArray, 0))))->invalid();
	$nc($(test("\\\\server\\share\u0019"_s, $$new($StringArray, 0))))->invalid();
	$nc($(test($cstr({'f', 'o', 'o', '\0', '\b', 'a', 'r'}), $$new($StringArray, 0))))->invalid();
	$nc($(test("C:\\foo "_s, $$new($StringArray, 0))))->invalid();
	$nc($(test("C:\\foo \\bar"_s, $$new($StringArray, 0))))->invalid();
	$nc($($nc($($nc($(test("C:/a/b/c"_s, $$new($StringArray, 0))))->string("C:\\a\\b\\c"_s)))->root("C:\\"_s)))->parent("C:\\a\\b"_s);
	$nc($($nc($($nc($(test("C://a//b//c"_s, $$new($StringArray, 0))))->string("C:\\a\\b\\c"_s)))->root("C:\\"_s)))->parent("C:\\a\\b"_s);
	header("hashCode"_s);
	int32_t h1 = $nc($($nc($(test("C:\\foo"_s, $$new($StringArray, 0))))->path()))->hashCode();
	int32_t h2 = $nc($($nc($(test("c:\\FOO"_s, $$new($StringArray, 0))))->path()))->hashCode();
	if (h1 != h2) {
		$throwNew($RuntimeException, "PathOps failed"_s);
	}
}

void PathOps::doUnixTests() {
	$init(PathOps);
	$useLocalCurrentObjectStackCache();
	header("Unix specific tests"_s);
	$var($Path, cwd, $nc($($Paths::get(""_s, $$new($StringArray, 0))))->toAbsolutePath());
	$nc($(test("/"_s, $$new($StringArray, 0))))->string("/"_s);
	$nc($(test("/"_s, $$new($StringArray, {""_s}))))->string("/"_s);
	$nc($(test("/"_s, $$new($StringArray, {"foo"_s}))))->string("/foo"_s);
	$nc($(test("/"_s, $$new($StringArray, {"/foo"_s}))))->string("/foo"_s);
	$nc($(test("/"_s, $$new($StringArray, {"foo/"_s}))))->string("/foo"_s);
	$nc($(test("foo"_s, $$new($StringArray, {
		"bar"_s,
		"gus"_s
	}))))->string("foo/bar/gus"_s);
	$nc($(test(""_s, $$new($StringArray, 0))))->string(""_s);
	$nc($(test(""_s, $$new($StringArray, {"/"_s}))))->string("/"_s);
	$nc($(test(""_s, $$new($StringArray, {
		"foo"_s,
		""_s,
		"bar"_s,
		""_s,
		"/gus"_s
	}))))->string("foo/bar/gus"_s);
	$nc($($nc($($nc($(test("/a/b/c"_s, $$new($StringArray, 0))))->root("/"_s)))->parent("/a/b"_s)))->name("c"_s);
	$nc($($nc($($nc($(test("/"_s, $$new($StringArray, 0))))->root("/"_s)))->parent(nullptr)))->name(nullptr);
	$nc($($nc($($nc($(test("a/b"_s, $$new($StringArray, 0))))->root(nullptr)))->parent("a"_s)))->name("b"_s);
	$nc($($nc($($nc($(test("foo"_s, $$new($StringArray, 0))))->root(nullptr)))->parent(nullptr)))->name("foo"_s);
	$nc($($nc($($nc($(test(""_s, $$new($StringArray, 0))))->root(nullptr)))->parent(nullptr)))->name(""_s);
	$nc($($nc($($nc($(test("/"_s, $$new($StringArray, 0))))->starts("/"_s)))->notStarts(""_s)))->notStarts("/foo"_s);
	$nc($($nc($($nc($(test("/foo"_s, $$new($StringArray, 0))))->starts("/"_s)))->starts("/foo"_s)))->notStarts("/f"_s);
	$nc($($nc($($nc($($nc($($nc($($nc($(test("/foo/bar"_s, $$new($StringArray, 0))))->starts("/"_s)))->starts("/foo"_s)))->starts("/foo/bar"_s)))->notStarts("/f"_s)))->notStarts("foo"_s)))->notStarts("foo/bar"_s);
	$nc($($nc($($nc($(test("foo"_s, $$new($StringArray, 0))))->starts("foo"_s)))->notStarts(""_s)))->notStarts("f"_s);
	$nc($($nc($($nc($($nc($($nc($(test("foo/bar"_s, $$new($StringArray, 0))))->starts("foo"_s)))->starts("foo/bar"_s)))->notStarts("f"_s)))->notStarts("/foo"_s)))->notStarts("/foo/bar"_s);
	$nc($($nc($(test(""_s, $$new($StringArray, 0))))->starts(""_s)))->notStarts("/"_s);
	$nc($($nc($($nc($($nc($(test("/"_s, $$new($StringArray, 0))))->ends("/"_s)))->notEnds(""_s)))->notEnds("foo"_s)))->notEnds("/foo"_s);
	$nc($($nc($($nc($(test("/foo"_s, $$new($StringArray, 0))))->ends("foo"_s)))->ends("/foo"_s)))->notEnds("fool"_s);
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("/foo/bar"_s, $$new($StringArray, 0))))->ends("bar"_s)))->ends("foo/bar"_s)))->ends("/foo/bar"_s)))->notEnds("ar"_s)))->notEnds("barack"_s)))->notEnds("/bar"_s)))->notEnds("o/bar"_s);
	$nc($($nc($($nc($($nc($(test("foo"_s, $$new($StringArray, 0))))->ends("foo"_s)))->notEnds(""_s)))->notEnds("oo"_s)))->notEnds("oola"_s);
	$nc($($nc($($nc($($nc($($nc($(test("foo/bar"_s, $$new($StringArray, 0))))->ends("bar"_s)))->ends("foo/bar"_s)))->notEnds("r"_s)))->notEnds("barmaid"_s)))->notEnds("/bar"_s);
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("foo/bar/gus"_s, $$new($StringArray, 0))))->ends("gus"_s)))->ends("bar/gus"_s)))->ends("foo/bar/gus"_s)))->notEnds("g"_s)))->notEnds("/gus"_s)))->notEnds("r/gus"_s)))->notEnds("barack/gus"_s)))->notEnds("bar/gust"_s);
	$nc($($nc($(test(""_s, $$new($StringArray, 0))))->ends(""_s)))->notEnds("/"_s);
	$nc($($nc($($nc($(test("a/b/c"_s, $$new($StringArray, 0))))->element(0, "a"_s)))->element(1, "b"_s)))->element(2, "c"_s);
	$nc($(test(""_s, $$new($StringArray, 0))))->element(0, ""_s);
	$nc($(test("/foo"_s, $$new($StringArray, 0))))->subpath(0, 1, "foo"_s);
	$nc($(test("foo"_s, $$new($StringArray, 0))))->subpath(0, 1, "foo"_s);
	$nc($($nc($($nc($(test("/foo/bar"_s, $$new($StringArray, 0))))->subpath(0, 1, "foo"_s)))->subpath(1, 2, "bar"_s)))->subpath(0, 2, "foo/bar"_s);
	$nc($($nc($($nc($(test("foo/bar"_s, $$new($StringArray, 0))))->subpath(0, 1, "foo"_s)))->subpath(1, 2, "bar"_s)))->subpath(0, 2, "foo/bar"_s);
	$nc($($nc($($nc($($nc($($nc($($nc($(test("/foo/bar/gus"_s, $$new($StringArray, 0))))->subpath(0, 1, "foo"_s)))->subpath(1, 2, "bar"_s)))->subpath(2, 3, "gus"_s)))->subpath(0, 2, "foo/bar"_s)))->subpath(1, 3, "bar/gus"_s)))->subpath(0, 3, "foo/bar/gus"_s);
	$nc($($nc($($nc($($nc($($nc($($nc($(test("foo/bar/gus"_s, $$new($StringArray, 0))))->subpath(0, 1, "foo"_s)))->subpath(1, 2, "bar"_s)))->subpath(2, 3, "gus"_s)))->subpath(0, 2, "foo/bar"_s)))->subpath(1, 3, "bar/gus"_s)))->subpath(0, 3, "foo/bar/gus"_s);
	$nc($(test(""_s, $$new($StringArray, 0))))->subpath(0, 1, ""_s);
	$nc($(test("/"_s, $$new($StringArray, 0))))->absolute();
	$nc($(test("/tmp"_s, $$new($StringArray, 0))))->absolute();
	$nc($(test("tmp"_s, $$new($StringArray, 0))))->notAbsolute();
	$nc($(test(""_s, $$new($StringArray, 0))))->notAbsolute();
	$nc($(test(cwd)))->absolute();
	$nc($($nc($(test("/"_s, $$new($StringArray, 0))))->makeAbsolute()))->absolute();
	$nc($($nc($(test("/tmp"_s, $$new($StringArray, 0))))->makeAbsolute()))->absolute();
	$nc($($nc($(test("tmp"_s, $$new($StringArray, 0))))->makeAbsolute()))->absolute();
	$nc($($nc($(test(""_s, $$new($StringArray, 0))))->makeAbsolute()))->absolute();
	$nc($($nc($($nc($(test("/tmp"_s, $$new($StringArray, 0))))->resolve("foo"_s, "/tmp/foo"_s)))->resolve("/foo"_s, "/foo"_s)))->resolve(""_s, "/tmp"_s);
	$nc($($nc($($nc($(test("tmp"_s, $$new($StringArray, 0))))->resolve("foo"_s, "tmp/foo"_s)))->resolve("/foo"_s, "/foo"_s)))->resolve(""_s, "tmp"_s);
	$nc($($nc($($nc($(test(""_s, $$new($StringArray, 0))))->resolve(""_s, ""_s)))->resolve("foo"_s, "foo"_s)))->resolve("/foo"_s, "/foo"_s);
	$nc($($nc($($nc($(test("foo"_s, $$new($StringArray, 0))))->resolveSibling("bar"_s, "bar"_s)))->resolveSibling("/bar"_s, "/bar"_s)))->resolveSibling(""_s, ""_s);
	$nc($($nc($($nc($(test("foo/bar"_s, $$new($StringArray, 0))))->resolveSibling("gus"_s, "foo/gus"_s)))->resolveSibling("/gus"_s, "/gus"_s)))->resolveSibling(""_s, "foo"_s);
	$nc($($nc($($nc($(test("/foo"_s, $$new($StringArray, 0))))->resolveSibling("gus"_s, "/gus"_s)))->resolveSibling("/gus"_s, "/gus"_s)))->resolveSibling(""_s, "/"_s);
	$nc($($nc($($nc($(test("/foo/bar"_s, $$new($StringArray, 0))))->resolveSibling("gus"_s, "/foo/gus"_s)))->resolveSibling("/gus"_s, "/gus"_s)))->resolveSibling(""_s, "/foo"_s);
	$nc($($nc($($nc($(test(""_s, $$new($StringArray, 0))))->resolveSibling("foo"_s, "foo"_s)))->resolveSibling("/foo"_s, "/foo"_s)))->resolve(""_s, ""_s);
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("/a"_s, $$new($StringArray, 0))))->relativize("/a"_s, ""_s)))->relativize("/"_s, ".."_s)))->relativize("/."_s, ".."_s)))->relativize("/.."_s, ".."_s)))->relativize("/../.."_s, ".."_s)))->relativize("/a/b"_s, "b"_s)))->relativize("/a/b/c"_s, "b/c"_s)))->relativize("/a/."_s, ""_s)))->relativize("/a/.."_s, ".."_s)))->relativize("/x"_s, "../x"_s)))->relativizeFail("x"_s)))->relativizeFail(""_s)))->relativizeFail("."_s)))->relativizeFail(".."_s);
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("/a/b"_s, $$new($StringArray, 0))))->relativize("/a/b"_s, ""_s)))->relativize("/a"_s, ".."_s)))->relativize("/"_s, "../.."_s)))->relativize("/."_s, "../.."_s)))->relativize("/.."_s, "../.."_s)))->relativize("/../.."_s, "../.."_s)))->relativize("/a/b/c"_s, "c"_s)))->relativize("/a/."_s, ".."_s)))->relativize("/a/.."_s, "../.."_s)))->relativize("/x"_s, "../../x"_s)))->relativizeFail("x"_s)))->relativizeFail(""_s)))->relativizeFail("."_s)))->relativizeFail(".."_s);
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("/a/b/c"_s, $$new($StringArray, 0))))->relativize("/a/b/c"_s, ""_s)))->relativize("/a/b"_s, ".."_s)))->relativize("/a"_s, "../.."_s)))->relativize("/"_s, "../../.."_s)))->relativize("/."_s, "../../.."_s)))->relativize("/.."_s, "../../.."_s)))->relativize("/../.."_s, "../../.."_s)))->relativize("/../../.."_s, "../../.."_s)))->relativize("/../../../.."_s, "../../.."_s)))->relativize("/a/b/c/d"_s, "d"_s)))->relativize("/a/b/c/d/e"_s, "d/e"_s)))->relativize("/a/b/c/."_s, ""_s)))->relativize("/a/b/c/.."_s, ".."_s)))->relativize("/a/x"_s, "../../x"_s)))->relativize("/x"_s, "../../../x"_s)))->relativizeFail("x"_s)))->relativizeFail(""_s)))->relativizeFail("."_s)))->relativizeFail(".."_s);
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("/../a"_s, $$new($StringArray, 0))))->relativize("/a"_s, ""_s)))->relativize("/"_s, ".."_s)))->relativize("/."_s, ".."_s)))->relativize("/.."_s, ".."_s)))->relativize("/../.."_s, ".."_s)))->relativize("/a/b"_s, "b"_s)))->relativize("/a/b/c"_s, "b/c"_s)))->relativize("/a/."_s, ""_s)))->relativize("/a/.."_s, ".."_s)))->relativize("/x"_s, "../x"_s)))->relativizeFail("x"_s)))->relativizeFail(""_s)))->relativizeFail("."_s)))->relativizeFail(".."_s);
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("/../a/b"_s, $$new($StringArray, 0))))->relativize("/a/b"_s, ""_s)))->relativize("/a"_s, ".."_s)))->relativize("/"_s, "../.."_s)))->relativize("/."_s, "../.."_s)))->relativize("/.."_s, "../.."_s)))->relativize("/../.."_s, "../.."_s)))->relativize("/../../.."_s, "../.."_s)))->relativize("/../../../.."_s, "../.."_s)))->relativize("/a/b/c"_s, "c"_s)))->relativize("/a/b/."_s, ""_s)))->relativize("/a/b/.."_s, ".."_s)))->relativize("/a/x"_s, "../x"_s)))->relativize("/x"_s, "../../x"_s)))->relativizeFail("x"_s)))->relativizeFail(""_s)))->relativizeFail("."_s)))->relativizeFail(".."_s);
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("/../../a/b"_s, $$new($StringArray, 0))))->relativize("/a/b"_s, ""_s)))->relativize("/a"_s, ".."_s)))->relativize("/"_s, "../.."_s)))->relativize("/."_s, "../.."_s)))->relativize("/.."_s, "../.."_s)))->relativize("/../.."_s, "../.."_s)))->relativize("/../../.."_s, "../.."_s)))->relativize("/../../../.."_s, "../.."_s)))->relativize("/a/b/c"_s, "c"_s)))->relativize("/a/b/."_s, ""_s)))->relativize("/a/b/.."_s, ".."_s)))->relativize("/a/x"_s, "../x"_s)))->relativize("/x"_s, "../../x"_s)))->relativizeFail("x"_s)))->relativizeFail(""_s)))->relativizeFail("."_s)))->relativizeFail(".."_s);
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("/../a/b/c"_s, $$new($StringArray, 0))))->relativize("/a/b/c"_s, ""_s)))->relativize("/a/b"_s, ".."_s)))->relativize("/a"_s, "../.."_s)))->relativize("/"_s, "../../.."_s)))->relativize("/."_s, "../../.."_s)))->relativize("/.."_s, "../../.."_s)))->relativize("/../.."_s, "../../.."_s)))->relativize("/../../.."_s, "../../.."_s)))->relativize("/../../../.."_s, "../../.."_s)))->relativize("/a/b/c/d"_s, "d"_s)))->relativize("/a/b/c/d/e"_s, "d/e"_s)))->relativize("/a/b/c/."_s, ""_s)))->relativize("/a/b/c/.."_s, ".."_s)))->relativize("/a/x"_s, "../../x"_s)))->relativize("/x"_s, "../../../x"_s)))->relativizeFail("x"_s)))->relativizeFail(""_s)))->relativizeFail("."_s)))->relativizeFail(".."_s);
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("/../../a/b/c"_s, $$new($StringArray, 0))))->relativize("/a/b/c"_s, ""_s)))->relativize("/a/b"_s, ".."_s)))->relativize("/a"_s, "../.."_s)))->relativize("/"_s, "../../.."_s)))->relativize("/."_s, "../../.."_s)))->relativize("/.."_s, "../../.."_s)))->relativize("/../.."_s, "../../.."_s)))->relativize("/../../.."_s, "../../.."_s)))->relativize("/../../../.."_s, "../../.."_s)))->relativize("/a/b/c/d"_s, "d"_s)))->relativize("/a/b/c/d/e"_s, "d/e"_s)))->relativize("/a/b/c/."_s, ""_s)))->relativize("/a/b/c/.."_s, ".."_s)))->relativize("/a/x"_s, "../../x"_s)))->relativize("/x"_s, "../../../x"_s)))->relativizeFail("x"_s)))->relativizeFail(""_s)))->relativizeFail("."_s)))->relativizeFail(".."_s);
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("/../../../a/b/c"_s, $$new($StringArray, 0))))->relativize("/a/b/c"_s, ""_s)))->relativize("/a/b"_s, ".."_s)))->relativize("/a"_s, "../.."_s)))->relativize("/"_s, "../../.."_s)))->relativize("/."_s, "../../.."_s)))->relativize("/.."_s, "../../.."_s)))->relativize("/../.."_s, "../../.."_s)))->relativize("/../../.."_s, "../../.."_s)))->relativize("/../../../.."_s, "../../.."_s)))->relativize("/a/b/c/d"_s, "d"_s)))->relativize("/a/b/c/d/e"_s, "d/e"_s)))->relativize("/a/b/c/."_s, ""_s)))->relativize("/a/b/c/.."_s, ".."_s)))->relativize("/a/x"_s, "../../x"_s)))->relativize("/x"_s, "../../../x"_s)))->relativizeFail("x"_s)))->relativizeFail(""_s)))->relativizeFail("."_s)))->relativizeFail(".."_s);
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("/./a"_s, $$new($StringArray, 0))))->relativize("/a"_s, ""_s)))->relativize("/"_s, ".."_s)))->relativize("/."_s, ".."_s)))->relativize("/.."_s, ".."_s)))->relativize("/../.."_s, ".."_s)))->relativize("/a/b"_s, "b"_s)))->relativize("/a/b/c"_s, "b/c"_s)))->relativize("/a/."_s, ""_s)))->relativize("/a/.."_s, ".."_s)))->relativize("/x"_s, "../x"_s)))->relativizeFail("x"_s)))->relativizeFail(""_s)))->relativizeFail("."_s)))->relativizeFail(".."_s);
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("/../a"_s, $$new($StringArray, 0))))->relativize("/a"_s, ""_s)))->relativize("/"_s, ".."_s)))->relativize("/."_s, ".."_s)))->relativize("/.."_s, ".."_s)))->relativize("/../.."_s, ".."_s)))->relativize("/a/b"_s, "b"_s)))->relativize("/a/b/c"_s, "b/c"_s)))->relativize("/a/."_s, ""_s)))->relativize("/a/.."_s, ".."_s)))->relativize("/x"_s, "../x"_s)))->relativizeFail("x"_s)))->relativizeFail(""_s)))->relativizeFail("."_s)))->relativizeFail(".."_s);
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("/a/.."_s, $$new($StringArray, 0))))->relativize("/a"_s, "a"_s)))->relativize("/"_s, ""_s)))->relativize("/."_s, ""_s)))->relativize("/.."_s, ""_s)))->relativize("/../.."_s, ""_s)))->relativize("/a/."_s, "a"_s)))->relativize("/a/.."_s, ""_s)))->relativize("/x"_s, "x"_s)))->relativizeFail("x"_s)))->relativizeFail(""_s)))->relativizeFail("."_s)))->relativizeFail(".."_s);
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("/"_s, $$new($StringArray, 0))))->relativize("/a"_s, "a"_s)))->relativize("/"_s, ""_s)))->relativize("/."_s, ""_s)))->relativize("/.."_s, ""_s)))->relativize("/../.."_s, ""_s)))->relativize("/a/."_s, "a"_s)))->relativize("/a/.."_s, ""_s)))->relativize("/x"_s, "x"_s)))->relativizeFail("x"_s)))->relativizeFail(""_s)))->relativizeFail("."_s)))->relativizeFail(".."_s);
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("a"_s, $$new($StringArray, 0))))->relativize("a"_s, ""_s)))->relativize(""_s, ".."_s)))->relativize("."_s, ".."_s)))->relativize(".."_s, "../.."_s)))->relativize("../.."_s, "../../.."_s)))->relativize("./.."_s, "../.."_s)))->relativize("a/b"_s, "b"_s)))->relativize("a/b/c"_s, "b/c"_s)))->relativize("../x"_s, "../../x"_s)))->relativizeFail("/"_s)))->relativizeFail("/x"_s);
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("a/b"_s, $$new($StringArray, 0))))->relativize("a/b"_s, ""_s)))->relativize("a"_s, ".."_s)))->relativize(""_s, "../.."_s)))->relativize("."_s, "../.."_s)))->relativize(".."_s, "../../.."_s)))->relativize("../.."_s, "../../../.."_s)))->relativize("./.."_s, "../../.."_s)))->relativize("a/b/c"_s, "c"_s)))->relativize("../x"_s, "../../../x"_s)))->relativizeFail("/"_s)))->relativizeFail("/x"_s);
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("a/b/c"_s, $$new($StringArray, 0))))->relativize("a/b/c"_s, ""_s)))->relativize("a/b"_s, ".."_s)))->relativize("a"_s, "../.."_s)))->relativize(""_s, "../../.."_s)))->relativize("."_s, "../../.."_s)))->relativize(".."_s, "../../../.."_s)))->relativize("../.."_s, "../../../../.."_s)))->relativize("./.."_s, "../../../.."_s)))->relativize("a/b/c/d"_s, "d"_s)))->relativize("a/b/c/d/e"_s, "d/e"_s)))->relativize("a/x"_s, "../../x"_s)))->relativize("../x"_s, "../../../../x"_s)))->relativizeFail("/"_s)))->relativizeFail("/x"_s);
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test(""_s, $$new($StringArray, 0))))->relativize("a"_s, "a"_s)))->relativize("a/b/c"_s, "a/b/c"_s)))->relativize(""_s, ""_s)))->relativize("."_s, "."_s)))->relativize(".."_s, ".."_s)))->relativize("../.."_s, "../.."_s)))->relativize("./.."_s, "./.."_s)))->relativizeFail("/"_s)))->relativizeFail("/x"_s);
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test(".."_s, $$new($StringArray, 0))))->relativize("../a"_s, "a"_s)))->relativize(".."_s, ""_s)))->relativize("./.."_s, ""_s)))->relativizeFail("/"_s)))->relativizeFail("/x"_s)))->relativizeFail(""_s)))->relativizeFail("."_s)))->relativizeFail("x"_s);
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("../a"_s, $$new($StringArray, 0))))->relativize("../a/b"_s, "b"_s)))->relativize("../a"_s, ""_s)))->relativize(".."_s, ".."_s)))->relativize("./.."_s, ".."_s)))->relativizeFail("/"_s)))->relativizeFail("/x"_s)))->relativizeFail(""_s)))->relativizeFail("."_s)))->relativizeFail("x"_s);
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("../a/b"_s, $$new($StringArray, 0))))->relativize("../a/b/c"_s, "c"_s)))->relativize("../a/b"_s, ""_s)))->relativize("../a"_s, ".."_s)))->relativize(".."_s, "../.."_s)))->relativize("./.."_s, "../.."_s)))->relativizeFail("/"_s)))->relativizeFail("/x"_s)))->relativizeFail(""_s)))->relativizeFail("x"_s);
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("a/.."_s, $$new($StringArray, 0))))->relativize("b"_s, "b"_s)))->relativize(""_s, ""_s)))->relativize("."_s, ""_s)))->relativize(".."_s, ".."_s)))->relativize("a/../b"_s, "b"_s)))->relativize("a/.."_s, ""_s)))->relativize("../b"_s, "../b"_s)))->relativize("b/.."_s, ""_s)))->relativizeFail("/"_s)))->relativizeFail("/x"_s);
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("a/../b"_s, $$new($StringArray, 0))))->relativize("a/../b"_s, ""_s)))->relativize("a/.."_s, ".."_s)))->relativize(""_s, ".."_s)))->relativize("."_s, ".."_s)))->relativize(".."_s, "../.."_s)))->relativize("b"_s, ""_s)))->relativize("c"_s, "../c"_s)))->relativize("../c"_s, "../../c"_s)))->relativize("a/../b/c"_s, "c"_s)))->relativizeFail("/"_s)))->relativizeFail("/x"_s);
	$nc($(test("/"_s, $$new($StringArray, 0))))->normalize("/"_s);
	$nc($(test("foo"_s, $$new($StringArray, 0))))->normalize("foo"_s);
	$nc($(test("/foo"_s, $$new($StringArray, 0))))->normalize("/foo"_s);
	$nc($(test(""_s, $$new($StringArray, 0))))->normalize(""_s);
	$nc($(test("."_s, $$new($StringArray, 0))))->normalize(""_s);
	$nc($(test(".."_s, $$new($StringArray, 0))))->normalize(".."_s);
	$nc($(test("/.."_s, $$new($StringArray, 0))))->normalize("/"_s);
	$nc($(test("/../.."_s, $$new($StringArray, 0))))->normalize("/"_s);
	$nc($(test("foo/."_s, $$new($StringArray, 0))))->normalize("foo"_s);
	$nc($(test("./foo"_s, $$new($StringArray, 0))))->normalize("foo"_s);
	$nc($(test("foo/.."_s, $$new($StringArray, 0))))->normalize(""_s);
	$nc($(test("../foo"_s, $$new($StringArray, 0))))->normalize("../foo"_s);
	$nc($(test("../../foo"_s, $$new($StringArray, 0))))->normalize("../../foo"_s);
	$nc($(test("foo/bar/.."_s, $$new($StringArray, 0))))->normalize("foo"_s);
	$nc($(test("foo/bar/gus/../.."_s, $$new($StringArray, 0))))->normalize("foo"_s);
	$nc($(test("/foo/bar/gus/../.."_s, $$new($StringArray, 0))))->normalize("/foo"_s);
	$nc($(test($cstr({'f', 'o', 'o', '\0', 'b', 'a', 'r'}), $$new($StringArray, 0))))->invalid();
	$nc($(test($cstr({'\0', 'f', 'o', 'o'}), $$new($StringArray, 0))))->invalid();
	$nc($(test($cstr({'b', 'a', 'r', '\0'}), $$new($StringArray, 0))))->invalid();
	$nc($(test($cstr({'/', '/', 'f', 'o', 'o', '\0', 'b', 'a', 'r'}), $$new($StringArray, 0))))->invalid();
	$nc($(test($cstr({'/', '/', '\0', 'f', 'o', 'o'}), $$new($StringArray, 0))))->invalid();
	$nc($(test($cstr({'/', '/', 'b', 'a', 'r', '\0'}), $$new($StringArray, 0))))->invalid();
	$nc($($nc($($nc($($nc($(test("//foo//bar"_s, $$new($StringArray, 0))))->string("/foo/bar"_s)))->root("/"_s)))->parent("/foo"_s)))->name("bar"_s);
}

void PathOps::npes() {
	$init(PathOps);
	$useLocalCurrentObjectStackCache();
	header("NullPointerException"_s);
	try {
		$Path::of(nullptr, $$new($StringArray, {"foo"_s}));
		$throwNew($RuntimeException, "NullPointerException not thrown"_s);
	} catch ($NullPointerException& npe) {
	}
	try {
		$Path::of("foo"_s, nullptr);
		$throwNew($RuntimeException, "NullPointerException not thrown"_s);
	} catch ($NullPointerException& npe) {
	}
	$var($Path, path, $nc($($FileSystems::getDefault()))->getPath("foo"_s, $$new($StringArray, 0)));
	try {
		$nc(path)->resolve(($String*)nullptr);
		$throwNew($RuntimeException, "NullPointerException not thrown"_s);
	} catch ($NullPointerException& npe) {
	}
	try {
		$nc(path)->relativize(nullptr);
		$throwNew($RuntimeException, "NullPointerException not thrown"_s);
	} catch ($NullPointerException& npe) {
	}
	try {
		$nc(path)->compareTo(($Path*)nullptr);
		$throwNew($RuntimeException, "NullPointerException not thrown"_s);
	} catch ($NullPointerException& npe) {
	}
	try {
		$nc(path)->startsWith(($Path*)nullptr);
		$throwNew($RuntimeException, "NullPointerException not thrown"_s);
	} catch ($NullPointerException& npe) {
	}
	try {
		$nc(path)->endsWith(($Path*)nullptr);
		$throwNew($RuntimeException, "NullPointerException not thrown"_s);
	} catch ($NullPointerException& npe) {
	}
}

void PathOps::main($StringArray* args) {
	$init(PathOps);
	npes();
	$var($String, osname, $System::getProperty("os.name"_s));
	if ($nc(osname)->startsWith("Windows"_s)) {
		doWindowsTests();
	} else {
		doUnixTests();
	}
}

void clinit$PathOps($Class* class$) {
	$assignStatic(PathOps::out, $System::out);
}

PathOps::PathOps() {
}

$Class* PathOps::load$($String* name, bool initialize) {
	$loadClass(PathOps, name, initialize, &_PathOps_ClassInfo_, clinit$PathOps, allocate$PathOps);
	return class$;
}

$Class* PathOps::class$ = nullptr;