import kivy
kivy.require("2.3.1")

from kivy.app import App
from kivy.lang import Builder
from kivy.uix.gridlayout import GridLayout

Builder.load_file('test.kv')

class Whatever(GridLayout):
	pass

class TestApp(App):
	def build(self):
		return Whatever()

if __name__ == '__main__':
	TestApp().run()