import kivy
kivy.require('2.3.1')

from kivy.app import App

from kivy_garden.mapview import MapView, MapMarker

class MapApp(App):

    def build(self):
        mapview = MapView(zoom=13, lat=50.0412, lon=21.9991)
        ber = MapMarker(lat=50.039593550126796, lon=21.999932593020528)
        boz = MapMarker(lat=50.06074750140428, lon=21.973538856665275)
        mapview.add_marker(ber)
        mapview.add_marker(boz)
        return mapview

if __name__ == '__main__':
    MapApp().run()