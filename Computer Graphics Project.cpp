<?xml version="1.0" encoding="UTF-8" standalone="yes" ?>
<CodeBlocks_project_file>
	<FileVersion major="1" minor="6" />
	<Project>
		<Option title="Computer Graphics Project" />
		<Option execution_dir="C:\Users\USER\Desktop\Computer Graphics Project\" />
		<Option pch_mode="2" />
		<Option compiler="gcc" />
		<Build>
			<Target title="Debug">
				<Option output="bin\Debug\Computer Graphics Project" prefix_auto="1" extension_auto="1" />
				<Option working_dir="C:\Program Files (x86)\CodeBlocks\MinGW\bin" />
				<Option object_output="obj\Debug\" />
				<Option type="1" />
				<Option compiler="gcc" />
				<Compiler>
					<Add option="-g" />
				</Compiler>
			</Target>
			<Target title="Release">
				<Option output="bin\Release\Computer Graphics Project" prefix_auto="1" extension_auto="1" />
				<Option working_dir="C:\Program Files (x86)\CodeBlocks\MinGW\bin" />
				<Option object_output="obj\Release\" />
				<Option type="0" />
				<Option compiler="gcc" />
				<Compiler>
					<Add option="-O2" />
				</Compiler>
				<Linker>
					<Add option="-s" />
				</Linker>
			</Target>
		</Build>
		<Compiler>
			<Add option="-Wall" />
			<Add directory="C:\Program Files (x86)\CodeBlocks\MinGW\include" />
		</Compiler>
		<Linker>
			<Add library="glut32" />
			<Add library="opengl32" />
			<Add library="glu32" />
			<Add library="winmm" />
			<Add library="gdi32" />
			<Add directory="C:\Program Files (x86)\CodeBlocks\MinGW\lib" />
		</Linker>
		<Unit filename="main.cpp" />
		<Extensions>
			<code_completion />
			<debugger />
		</Extensions>
	</Project>
</CodeBlocks_project_file>
