<?php

if (!isset($argv[1])){
	echo "[usage] - generateClass <ClassName>\n";
	return ;
}

$name = $argv[1];

system("touch ".$name.".cpp ".$name.".hpp");

$hpp = "#ifndef ".strtoupper($name)."_H\n# define ".strtoupper($name)."_H\nclass ".$name."{\n\n	public:\n		".$name."(void);\n		~".$name."(void);\n\n};\n#endif";

$cpp= "#include \"".$name.".hpp\"\n\n".$name."::".$name."(void){\n	return;\n}\n\n".$name."::~".$name."(void){\n	return ;\n}";

file_put_contents($name.".hpp", $hpp);
file_put_contents($name.".cpp", $cpp);
