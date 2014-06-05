import json
from pprint import pprint


json_data = open('data_file.json')
data = json.load(json_data)
json_data.close()

print type(data['x_values'])

