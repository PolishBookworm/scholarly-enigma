import requests

lat_long = "0,0"
google_key = ""

URL = ('https://maps.googleapis.com/maps/api/geocode/json?latlng=' + lat_long + '&key={}').format(google_key)

# URL = "https://maps.app.goo.gl/vSJ22a6dAX3U2DxS7"

# data = requests.get(URL).json()
# data = requests.get(URL,headers = {'Accept': 'application/json'}).json()
data = requests.get(URL,headers = {'Accept': 'application/json'}).text

print(data)

# import requests

# headers = {'Accept': 'application/json'}

# r = requests.get('https://reqbin.com/echo/get/json', headers=headers)

# try:
# 	print(f"Response: {r.json()}")
# except requests.JSONDecodeError as error:
#     print(f"Sorry {error}")





# # import requests module 
# import requests 
  
# # Making a get request 
# response = requests.get('https://api.github.com') 
  
# # Store JSON data in API_Data 
# API_Data = response.json() 
  
# # Print json data using loop 
# for key in API_Data:{ 
#     print(key,":", API_Data[key]) 
# }

